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

#ifndef VCDRIVERS_STDIOBASE_H
#define VCDRIVERS_STDIOBASE_H

#include <stdint.h>
#include <unistd.h>

#include <vcdrivers/config.h>

#ifdef __cplusplus
extern "C" {
#endif

void vcstdio_init(void *arg);

ssize_t vcstdio_write(const void *buffer, size_t len);

ssize_t vcstdio_read(void *buffer, size_t count);

int vcstdio_read_available(void);

#ifdef __cplusplus
}
#endif

#endif /* VCDRIVERS_STDIOBASE_H */
