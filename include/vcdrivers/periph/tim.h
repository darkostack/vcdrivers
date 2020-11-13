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
