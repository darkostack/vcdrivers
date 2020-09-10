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

#ifndef VCDRIVERS_PERIPH_IRQ_H
#define VCDRIVERS_PERIPH_IRQ_H

#include <stdbool.h>

#include <vcdrivers/config.h>

#ifdef __cplusplus
extern "C" {
#endif

unsigned vcirq_disable(void);

unsigned vcirq_enable(void);

void vcirq_restore(unsigned state);

int vcirq_is_in(void);

#ifdef __cplusplus
}
#endif

#endif /* VCDRIVERS_PERIPH_IRQ_H */
