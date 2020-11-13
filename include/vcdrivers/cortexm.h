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
