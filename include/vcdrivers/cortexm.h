/*
 * Copyright (c) 2020, Vertexcom Technologies, Inc.
 * All rights reserved.
 *
 * NOTICE: All information contained herein is, and remains
 * the property of Vertexcom Technologies, Inc. and its suppliers,
 * if any. The intellectual and technical concepts contained
 * herein are proprietary to Vertexcom Technologies, Inc.
 * and may be covered by U.S. and Foreign Patents, patents in process,
 * and protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Vertexcom Technologies, Inc.
 *
 * Authors: Darko Pancev <darko.pancev@vertexcom.com>
 */

#ifndef VCDRIVERS_CORTEXM_H
#define VCDRIVERS_CORTEXM_H

#include <vcdrivers/config.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Use this macro to make interrupt functions overridable with the dummy_handler
 * as fallback in case they are not implemented
 */
#define WEAK_DEFAULT __attribute__((weak, alias("dummy_handler")))

/**
 * Use this macro to define the parts of the vector table
 */
#define ISR_VECTOR(x) __attribute__((used, section(".vectors." #x)))

/**
 * Number of Cortex-M non-ISR exceptions
 *
 * This means those that are no hardware interrupts, or the ones with a
 * negative interrupt number.
 */
#define CORTEXM_NONISR_EXCEPTIONS (15)

/**
 * Interrupt stack canary value 0xe7fe is the ARM Thumb machine code equivalent
 * of asm("bl #-2\n") or 'while (1);', i.e. an infinite loop
 */
#define CORTEXM_STACK_CANARY_WORD (0xE7FEE7FEu)

typedef void (*isr_t)(void);

/**
 * Structure of Cortex-M basic vector table
 */
typedef struct
{
    void *estack; /* exception stack pointer */
    isr_t vectors[CORTEXM_NONISR_EXCEPTIONS]; /* shared Cortex-M vectors */
} cortexm_base_t;

void reset_handler_default(void);

void nmi_default(void);

void hard_fault_default(void);

void mem_manage_default(void);

void bus_fault_default(void);

void usage_fault_default(void);

void debug_mon_default(void);

void dummy_handler_default(void);

#ifdef __cplusplus
}
#endif

#endif /* VCDRIVERS_CORTEXM_H */
