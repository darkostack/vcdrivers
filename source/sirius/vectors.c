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

void dummy_handler(void)
{
    dummy_handler_default();
}

WEAK_DEFAULT void isr_pmu(void);
WEAK_DEFAULT void isr_rtc(void);
WEAK_DEFAULT void isr_u32k0(void);
WEAK_DEFAULT void isr_u32k1(void);
WEAK_DEFAULT void isr_i2c0(void);
WEAK_DEFAULT void isr_spi0(void);
WEAK_DEFAULT void isr_uart0(void);
WEAK_DEFAULT void isr_uart1(void);
WEAK_DEFAULT void isr_uart2(void);
WEAK_DEFAULT void isr_uart3(void);
WEAK_DEFAULT void isr_uart4(void);
WEAK_DEFAULT void isr_uart5(void);
WEAK_DEFAULT void isr_iso78160(void);
WEAK_DEFAULT void isr_iso78161(void);
WEAK_DEFAULT void isr_tim0(void);
WEAK_DEFAULT void isr_tim1(void);
WEAK_DEFAULT void isr_tim2(void);
WEAK_DEFAULT void isr_tim3(void);
WEAK_DEFAULT void isr_pwm0(void);
WEAK_DEFAULT void isr_pwm1(void);
WEAK_DEFAULT void isr_pwm2(void);
WEAK_DEFAULT void isr_pwm3(void);
WEAK_DEFAULT void isr_dma(void);
WEAK_DEFAULT void isr_embflash(void);
WEAK_DEFAULT void isr_ana(void);
WEAK_DEFAULT void isr_spi1(void);
WEAK_DEFAULT void isr_spi2(void);
WEAK_DEFAULT void isr_keyscan(void);
WEAK_DEFAULT void isr_uart6(void);
WEAK_DEFAULT void isr_crypto(void);
WEAK_DEFAULT void isr_i2c1(void);
WEAK_DEFAULT void isr_gpio(void);

ISR_VECTOR(1) const isr_t vector_cpu[CPU_IRQ_NUMOF] = {
    [0] = isr_pmu,
    [1] = isr_rtc,
    [2] = isr_u32k0,
    [3] = isr_u32k1,
    [4] = isr_i2c0,
    [5] = isr_spi0,
    [6] = isr_uart0,
    [7] = isr_uart1,
    [8] = isr_uart2,
    [9] = isr_uart3,
    [10] = isr_uart4,
    [11] = isr_uart5,
    [12] = isr_iso78160,
    [13] = isr_iso78161,
    [14] = isr_tim0,
    [15] = isr_tim1,
    [16] = isr_tim2,
    [17] = isr_tim3,
    [18] = isr_pwm0,
    [19] = isr_pwm1,
    [20] = isr_pwm2,
    [21] = isr_pwm3,
    [22] = isr_dma,
    [23] = isr_embflash,
    [24] = isr_ana,
    [27] = isr_spi1,
    [28] = isr_spi2,
    [29] = isr_keyscan,
    [30] = isr_uart6,
    [31] = isr_crypto,
    [36] = isr_i2c1,
    [37] = isr_gpio,
};
