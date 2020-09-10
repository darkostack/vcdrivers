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

#include <vcdrivers/cpu.h>

void dummy_handler(void)
{
    dummy_handler_default();
}

WEAK_DEFAULT void isr_pmu(void);
WEAK_DEFAULT void isr_rtc(void);
WEAK_DEFAULT void isr_u32k0(void);
WEAK_DEFAULT void isr_u32k1(void);
WEAK_DEFAULT void isr_i2c0(void);
WEAK_DEFAULT void isr_spi0(void);
WEAK_DEFAULT void isr_uart0(void);
WEAK_DEFAULT void isr_uart1(void);
WEAK_DEFAULT void isr_uart2(void);
WEAK_DEFAULT void isr_uart3(void);
WEAK_DEFAULT void isr_uart4(void);
WEAK_DEFAULT void isr_uart5(void);
WEAK_DEFAULT void isr_iso78160(void);
WEAK_DEFAULT void isr_iso78161(void);
WEAK_DEFAULT void isr_tim0(void);
WEAK_DEFAULT void isr_tim1(void);
WEAK_DEFAULT void isr_tim2(void);
WEAK_DEFAULT void isr_tim3(void);
WEAK_DEFAULT void isr_pwm0(void);
WEAK_DEFAULT void isr_pwm1(void);
WEAK_DEFAULT void isr_pwm2(void);
WEAK_DEFAULT void isr_pwm3(void);
WEAK_DEFAULT void isr_dma(void);
WEAK_DEFAULT void isr_embflash(void);
WEAK_DEFAULT void isr_ana(void);
WEAK_DEFAULT void isr_spi1(void);
WEAK_DEFAULT void isr_spi2(void);
WEAK_DEFAULT void isr_keyscan(void);
WEAK_DEFAULT void isr_uart6(void);
WEAK_DEFAULT void isr_crypto(void);
WEAK_DEFAULT void isr_i2c1(void);
WEAK_DEFAULT void isr_gpio(void);

ISR_VECTOR(1) const isr_t vector_cpu[CPU_IRQ_NUMOF] = {
    [0] = isr_pmu,
    [1] = isr_rtc,
    [2] = isr_u32k0,
    [3] = isr_u32k1,
    [4] = isr_i2c0,
    [5] = isr_spi0,
    [6] = isr_uart0,
    [7] = isr_uart1,
    [8] = isr_uart2,
    [9] = isr_uart3,
    [10] = isr_uart4,
    [11] = isr_uart5,
    [12] = isr_iso78160,
    [13] = isr_iso78161,
    [14] = isr_tim0,
    [15] = isr_tim1,
    [16] = isr_tim2,
    [17] = isr_tim3,
    [18] = isr_pwm0,
    [19] = isr_pwm1,
    [20] = isr_pwm2,
    [21] = isr_pwm3,
    [22] = isr_dma,
    [23] = isr_embflash,
    [24] = isr_ana,
    [27] = isr_spi1,
    [28] = isr_spi2,
    [29] = isr_keyscan,
    [30] = isr_uart6,
    [31] = isr_crypto,
    [36] = isr_i2c1,
    [37] = isr_gpio,
};
