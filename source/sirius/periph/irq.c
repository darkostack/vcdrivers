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

#include <stdint.h>

#include <vcdrivers/cpu.h>
#include <vcdrivers/periph/irq.h>

unsigned int vcirq_disable(void)
{
    uint32_t mask = __get_PRIMASK();
    __disable_irq();
    return mask;
}

__attribute__((used)) unsigned int vcirq_enable(void)
{
    __enable_irq();
    return __get_PRIMASK();
}

void vcirq_restore(unsigned int aState)
{
    __set_PRIMASK(aState);
}

/**
 * See if the current context is inside an ISR
 */
int vcirq_is_in(void)
{
    return (__get_IPSR() & 0xFF);
}
