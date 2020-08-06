#include <stdint.h>
#include <cpu.h>

#include <vcdrivers/periph/irq.h>

unsigned int vcirq_disable(void)
{
    uint32_t mask = __get_PRIMASK();
    __disable_irq();
    return mask;
}

__attribute__((used)) unsigned int vcirq_enable(void)
{
    __enable_irq();
    return __get_PRIMASK();
}

void vcirq_restore(unsigned int aState)
{
    __set_PRIMASK(aState);
}

/**
 * See if the current context is inside an ISR
 */
int vcirq_is_in(void)
{
    return (__get_IPSR() & 0xFF);
}
