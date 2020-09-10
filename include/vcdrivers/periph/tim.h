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

#ifndef VCDRIVERS_PERIPH_TIM_H
#define VCDRIVERS_PERIPH_TIM_H

#include <limits.h>
#include <stddef.h>
#include <stdint.h>

#include <vcdrivers/config.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned int vctim_t;

#define TIM_DEV(x) (x)

#define TIM_UNDEF ((vctim_t)(UINT_MAX))

typedef void (*vctim_callback_func_t)(void *arg, int channel);

typedef struct
{
    vctim_callback_func_t callback;
    void *arg;
} vctim_isr_context_t;

int vctim_init(vctim_t dev, unsigned long freq, vctim_callback_func_t callback, void *arg);

int vctim_set(vctim_t dev, unsigned channel, unsigned int timeout);

int vctim_set_absolute(vctim_t dev, unsigned channel, unsigned int value);

int vctim_clear(vctim_t dev, unsigned channel);

uint32_t vctim_read(vctim_t dev);

void vctim_start(vctim_t dev);

void vctim_stop(vctim_t dev);

#ifdef __cplusplus
}
#endif

#endif /* VCDRIVERS_PERIPH_TIM_H */
