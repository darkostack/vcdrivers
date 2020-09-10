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
