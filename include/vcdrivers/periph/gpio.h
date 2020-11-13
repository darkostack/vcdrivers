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

#ifndef VCDRIVERS_PERIPH_GPIO_H
#define VCDRIVERS_PERIPH_GPIO_H

#include <limits.h>
#include <stdint.h>

#include <vcdrivers/config.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned int vcgpio_t;

#define GPIO_UNDEF ((vcgpio_t)(UINT_MAX))

#define GPIO_PIN(port, pin) ((vcgpio_t)((port & 0xf) | ((pin & 0xf) << 4)))

/**
 * GPIO port definition.
 */
enum
{
    PORTA,
    PORTB,
    PORTC,
    PORTD,
    PORTE,
    PORTF
};

typedef enum
{
    GPIO_IN,    /* configure as input without pull resistor */
    GPIO_IN_PD, /* configure as input with pull-down resistor */
    GPIO_IN_PU, /* configure as input with pull-up resistor */
    GPIO_OUT,   /* configure as output in push-pull mode */
    GPIO_OD,    /* configure as output in open-drain mode without pull resistor */
    GPIO_OD_PU  /* configure as output in open-drain mode with pull resistor enabled */
} vcgpio_mode_t;

/**
 * Definition of possible active flanks for external interrupt mode.
 */
typedef enum
{
    GPIO_FALLING = 0, /* emit interrupt on falling flank */
    GPIO_RISING  = 1, /* emit interrupt on rising flank */
    GPIO_BOTH    = 2  /* emit interrupt on both flank */
} vcgpio_flank_t;

/**
 * Signature of event callback functions triggered from interrupts.
 */
typedef void (*vcgpio_callback_func_t)(void *aArg);

typedef struct
{
    vcgpio_callback_func_t callback;
    void *arg;
} vcgpio_isr_context_t;

int vcgpio_init(vcgpio_t pin, vcgpio_mode_t mode);

int vcgpio_init_int(vcgpio_t pin, vcgpio_mode_t mode, vcgpio_flank_t flank, vcgpio_callback_func_t callback, void *arg);

void vcgpio_irq_enable(vcgpio_t pin);

void vcgpio_irq_disable(vcgpio_t pin);

int vcgpio_read(vcgpio_t pin);

void vcgpio_set(vcgpio_t pin);

void vcgpio_clear(vcgpio_t pin);

void vcgpio_toggle(vcgpio_t pin);

void vcgpio_write(vcgpio_t pin, int value);

#ifdef __cplusplus
}
#endif

#endif /* VCDRIVERS_PERIPH_GPIO_H */
