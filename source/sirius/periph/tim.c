/*
 *  Copyright (c) 2020, Vertexcom Technologies, Inc.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

#include <vcdrivers/cpu.h>
#include <vcdrivers/assert.h>
#include <vcdrivers/periph/tim.h>

#define TIM_NUMOF (4U)
#define TIM_CHAN_NUMOF (3U)

static int _tim_irqn[TIM_NUMOF] = {
    Pwm0_IRQn,
    Pwm1_IRQn,
    Pwm2_IRQn,
    Pwm3_IRQn
};

static vctim_isr_context_t _isr_tim_ctx[TIM_NUMOF];

int vctim_init(vctim_t dev, unsigned long freq, vctim_callback_func_t callback, void *arg)
{
    vcassert(dev < TIM_NUMOF);

    /* remember the interrupt context */
    _isr_tim_ctx[dev].callback = callback;
    _isr_tim_ctx[dev].arg = arg;

    /* enable the peripheral clock */
    uint32_t temp = VC_MISC2->PCLKEN;
    temp |= MISC2_PCLKEN_TIMER_Enabled;
    VC_MISC2->CLKEN_UNLOCK = MISC2_CLKEN_UNLOCK_UNLOCK_KEY;
    VC_MISC2->PCLKEN = temp;

    /* only support 1 MHz frequency base */
    vcassert(freq == 1000000ul);

    /* config pwm control register */
    temp = VC_PWM(dev)->CTL;

    temp &= ~PWM_CTL_TSEL_Msk;
    temp &= ~PWM_CTL_ID_Msk;

    temp |= PWM_CTL_TSEL_PCLK;
    temp |= PWM_CTL_ID_CLKDIV16; /* (SystemCoreClock / 2 (APBDIV)) / 16 = (39.3216 / 2) / 16 = ~1MHz */

    VC_PWM(dev)->CTL = temp;

    /* start pwm timer */
    vctim_start(dev);

    return 0;
}

int vctim_set(vctim_t dev, unsigned channel, unsigned int timeout)
{
    vcassert(dev < TIM_NUMOF && channel < TIM_CHAN_NUMOF);

    /* config capture/compare register (ccr) period */
    VC_PWM(dev)->CCR[channel] = timeout;

    /* enable capture/compare interrupt */
    uint32_t temp = VC_PWM(dev)->CCTL[channel];

    temp &= ~PWM_CCTL_CCIE_Msk;
    temp |= PWM_CCTL_CCIE_Enabled;

    VC_PWM(dev)->CCTL[channel] = temp;

    /* enable global timer interrupt */
    NVIC_EnableIRQ(_tim_irqn[dev]);

    return 0;
}

int vctim_set_absolute(vctim_t dev, unsigned channel, unsigned int value)
{
    uint16_t now = vctim_read(dev);
    uint32_t target = now + value;
    if (target > 0xffff)
    {
        target = target - 0xffff;
    }
    return vctim_set(dev, channel, target);
}

int vctim_clear(vctim_t dev, unsigned channel)
{
    vcassert(dev < TIM_NUMOF && channel < TIM_CHAN_NUMOF);

    /* clear capture/compare register period to it's default value */
    VC_PWM(dev)->CCR[channel] = (PWM_CCR_CCR_Msk);

    /* clear pwm counter */
    uint32_t temp = VC_PWM(dev)->CTL;

    temp &= ~PWM_CTL_CLR_Msk;
    temp |= PWM_CTL_CLR_Enabled;

    VC_PWM(dev)->CTL = temp;

    return 0;
}

uint16_t vctim_read(vctim_t dev)
{
    return VC_PWM(dev)->TAR;
}

void vctim_start(vctim_t dev)
{
    vcassert(dev < TIM_NUMOF);

    uint32_t temp = VC_PWM(dev)->CTL;

    temp &= ~PWM_CTL_MC_Msk;
    temp |= PWM_CTL_MC_Continous;

    VC_PWM(dev)->CTL = temp;
}

void vctim_stop(vctim_t dev)
{
    vcassert(dev < TIM_NUMOF);

    uint32_t temp = VC_PWM(dev)->CTL;

    temp &= ~PWM_CTL_MC_Msk;
    temp |= PWM_CTL_MC_Stop;

    VC_PWM(dev)->CTL = temp;
}

static void _irq_tim_handler(vctim_t dev)
{
    uint32_t temp = 0;

    if ((VC_PWM(dev)->CTL & PWM_CTL_IFG_Msk) != 0)
    {
        /* clear IFG interrupt flag */
        temp = VC_PWM(dev)->CTL;
        temp |= PWM_CTL_IFG_Msk;
        VC_PWM(dev)->CTL = temp;
        return;
    }

    for (uint8_t ch = 0; ch < TIM_CHAN_NUMOF; ch++)
    {
        if ((VC_PWM(dev)->CCTL[ch] & PWM_CCTL_CCIFG_Msk) != 0)
        {
            /* clear CCIFG interrupt flag */
            temp = VC_PWM(dev)->CCTL[ch];
            temp |= PWM_CCTL_CCIFG_Msk;
            VC_PWM(dev)->CCTL[ch] = temp;
            if (_isr_tim_ctx[dev].callback != NULL && VC_PWM(dev)->CCR[ch] != 0)
            {
                _isr_tim_ctx[dev].callback(_isr_tim_ctx[dev].arg, ch);
                cpu_end_of_isr(); /* notify app or rtos we are at the end of isr */
                break;
            }
        }
    }
}

/* PWM TIMER interrupt function entry */
void isr_pwm0(void)
{
    _irq_tim_handler(TIM_DEV(0));
}

void isr_pwm1(void)
{
    _irq_tim_handler(TIM_DEV(1));
}

void isr_pwm2(void)
{
    _irq_tim_handler(TIM_DEV(2));
}

void isr_pwm3(void)
{
    _irq_tim_handler(TIM_DEV(3));
}
