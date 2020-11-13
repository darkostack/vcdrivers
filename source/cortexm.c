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

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

#include <vcdrivers/config.h>
#include <vcdrivers/cpu.h>

/**
 * Memory markers, defined in the linker script
 */
extern uint32_t _sfixed;
extern uint32_t _efixed;
extern uint32_t _etext;
extern uint32_t _srelocate;
extern uint32_t _erelocate;
extern uint32_t _szero;
extern uint32_t _ezero;
extern uint32_t _sstack;
extern uint32_t _estack;
extern uint8_t  _sram;
extern uint8_t  _eram;

/**
 * Allocation of the interrupt stack
 */
__attribute__((used, section(".isr_stack"))) uint8_t isr_stack[CPU_ISR_STACK_SIZE];

/**
 * Pre-start routine for CPU-specific settings
 */
__attribute__((weak)) void pre_startup(void)
{
}

/**
 * Post-start routine for CPU-specific settings
 */
__attribute__((weak)) void post_startup(void)
{
}

void reset_handler_default(void)
{
    uint32_t *dst;
    uint32_t *src = &_etext;

    pre_startup();

    uint32_t *top;
    /* Fill stack space with canary values up until the current stack pointer */
    /* Read current stack pointer from CPU register */
    __asm__ volatile("mov %[top], sp" : [ top ] "=r"(top) : :);
    dst = &_sstack;
    while (dst < top)
    {
        *(dst++) = CORTEXM_STACK_CANARY_WORD;
    }

    /* load data section from flash to ram */
    for (dst = &_srelocate; dst < &_erelocate;)
    {
        *(dst++) = *(src++);
    }

    /* default bss section to zero */
    for (dst = &_szero; dst < &_ezero;)
    {
        *(dst++) = 0;
    }

    post_startup();

    cpu_init();

    extern void __libc_init_array(void);
    __libc_init_array();

    /* startup the kernel */
    // TODO: startup rtos kernel here

    extern int main(void);
    main();
}

void nmi_default(void)
{
    dummy_handler_default();
}

void hard_fault_default(void)
{
    dummy_handler_default();
}

void mem_manage_default(void)
{
    dummy_handler_default();
}

void bus_fault_default(void)
{
    dummy_handler_default();
}

void usage_fault_default(void)
{
    dummy_handler_default();
}

void debug_mon_default(void)
{
    dummy_handler_default();
}

void dummy_handler_default(void)
{
    while (1);
}

/* Cortex-M common interrupt vectors */
__attribute__((weak, alias("dummy_handler_default"))) void isr_svc(void);
__attribute__((weak, alias("dummy_handler_default"))) void isr_pendsv(void);
__attribute__((weak, alias("dummy_handler_default"))) void isr_systick(void);

/* define Cortex-M base interrupt vectors */
ISR_VECTOR(0) const cortexm_base_t cortex_vector_base = {
    &_estack,
    {
    /* entry point of the program */
    [0] = reset_handler_default,
    /* [-14] non maskable interrupt handler */
    [1] = nmi_default,
    /* [-13] hard fault exception */
    [2] = hard_fault_default,
    /* [-12] memory manage exception */
    [3] = mem_manage_default,
    /* [-11] bus fault exception */
    [4] = bus_fault_default,
    /* [-10] usage fault exception */
    [5] = usage_fault_default,
    /* [-5] SW interrupt use for triggering context switches */
    [10] = isr_svc,
    /* [-4] debug monitor exception */
    [11] = debug_mon_default,
    /* [-2] pendSV interrupt use to do the actual context switch */
    [13] = isr_pendsv,
    /* [-1] SysTick interrupt not used */
    [14] = isr_systick,
    }
};
