#ifndef VCDRIVERS_PERIPH_IRQ_H
#define VCDRIVERS_PERIPH_IRQ_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

unsigned vcirq_disable(void);

unsigned vcirq_enable(void);

void vcirq_restore(unsigned state);

int vcirq_is_in(void);

#ifdef __cplusplus
}
#endif

#endif /* VCDRIVERS_PERIPH_IRQ_H */
