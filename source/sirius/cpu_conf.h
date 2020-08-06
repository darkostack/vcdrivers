#ifndef CPU_CONF_H
#define CPU_CONF_H

#include <cortexm.h>

#ifdef __cplusplus
extern "C" {
#endif

#define CPU_ISR_STACK_SIZE (1024)
#define CPU_DEFAULT_IRQ_PRIO (63)
#define CPU_IRQ_NUMOF (64)

#include "sirius.h"
#include "sirius_bitfields.h"

/**
 * Stack start and end address defined in linker script.
 */
extern uint32_t _estack;
extern uint32_t _sstack;

/**
 * Interrupt vector base address, defined in linker script.
 */
extern const void *_isr_vectors;

#ifdef __cplusplus
}
#endif

#endif /* CPU_CONF_H */
