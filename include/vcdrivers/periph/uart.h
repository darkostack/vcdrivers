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

#ifndef VCDRIVERS_PERIPH_UART_H
#define VCDRIVERS_PERIPH_UART_H

#include <limits.h>
#include <stddef.h>
#include <stdint.h>

#include <vcdrivers/config.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned int vcuart_t;

#define UART_UNDEF ((vcuart_t)(UINT_MAX))

#define UART_DEV(x) ((vcuart_t)(x))

typedef void (*vcuart_rx_callback_func_t)(void *arg, uint8_t data);

typedef struct
{
    vcuart_rx_callback_func_t callback;
    void *arg;
} vcuart_isr_context_t;

enum
{
    UART_OK     = 0,
    UART_NODEV  = -1,
    UART_NOBAUD = -2,
    UART_INTERR = -3,
    UART_NOMODE = -4,
};

typedef enum
{
    UART_PARITY_NONE,
    UART_PARITY_EVEN,
    UART_PARITY_ODD,
    UART_PARITY_MARK,
    UART_PARITY_SPACE,
} vcuart_parity_t;

typedef enum
{
    UART_DATA_BITS_5,
    UART_DATA_BITS_6,
    UART_DATA_BITS_7,
    UART_DATA_BITS_8,
} vcuart_data_bits_t;

typedef enum
{
    UART_STOP_BITS_1,
    UART_STOP_BITS_2,
} vcuart_stop_bits_t;

int vcuart_init(vcuart_t uart, uint32_t baudrate, vcuart_rx_callback_func_t callback, void *arg);

int vcuart_mode(vcuart_t uart, vcuart_data_bits_t data_bits, vcuart_parity_t parity, vcuart_stop_bits_t stop_bits);

size_t vcuart_write(vcuart_t uart, const uint8_t *data, size_t len);

void vcuart_power_on(vcuart_t uart);

void vcuart_power_off(vcuart_t uart);

#ifdef __cplusplus
}
#endif

#endif /* VC_DRIVERS_PERIPH_UART_H */
