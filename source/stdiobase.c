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

#include <vcdrivers/config.h>
#include <vcdrivers/periph/uart.h>
#include <vcdrivers/stdiobase.h>

__attribute__((weak)) void vcstdio_init(void *arg)
{
    (void) arg;
    vcuart_init(VCDRIVERS_CONFIG_STDIOBASE_UART_DEV, 115200, NULL, NULL);
}

ssize_t vcstdio_write(const void *buffer, size_t len)
{
    return vcuart_write(VCDRIVERS_CONFIG_STDIOBASE_UART_DEV, (const uint8_t *)buffer, len);
}

__attribute__((weak)) ssize_t vcstdio_read(void *buffer, size_t count)
{
    (void) buffer;
    (void) count;
    return 0;
}

__attribute__((weak)) int vcstdio_read_available(void)
{
    return 0;
}
