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

#include <assert.h>
#include <errno.h>
#include <reent.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/unistd.h>
#include <unistd.h>

#include <vcdrivers/config.h>
#include <vcdrivers/periph/irq.h>
#include <vcdrivers/stdiobase.h>

extern char _sheap; /* start of the heap */
extern char _eheap; /* end of the heap */

char *heap_top = &_sheap + 4;

void _exit(int n)
{
    (void)n;
    while (1);
}

/**
 * Allocate memory from the heap.
 */
void *_sbrk_r(struct _reent *r, ptrdiff_t incr)
{
    unsigned int state = vcirq_disable();
    void *res = heap_top;

    if ((heap_top + incr > &_eheap) || (heap_top + incr < &_sheap))
    {
        r->_errno = ENOMEM;
        res = (void *)-1;
    }
    else
    {
        heap_top += incr;
    }

    vcirq_restore(state);
    return res;
}

_ssize_t _read_r(struct _reent *r, int fd, void *buffer, size_t count)
{
    (void)r;
    (void)fd;
    return vcstdio_read(buffer, count);
}

_ssize_t _write_r(struct _reent *r, int fd, const void *data, size_t count)
{
    (void)r;
    (void)fd;
    return vcstdio_write(data, count);
}

/* Stubs to avoid linking errors, these functions do not have any effect */
int _open_r(struct _reent *r, const char *name, int flags, int mode)
{
    (void)name;
    (void)flags;
    (void)mode;
    r->_errno = ENODEV;
    return -1;
}

int _close_r(struct _reent *r, int fd)
{
    (void)fd;
    r->_errno = ENODEV;
    return -1;
}

_off_t _lseek_r(struct _reent *r, int fd, _off_t pos, int dir)
{
    (void)fd;
    (void)pos;
    (void)dir;
    r->_errno = ENODEV;
    return -1;
}

int _fstat_r(struct _reent *r, int fd, struct stat *st)
{
    (void)fd;
    (void)st;
    r->_errno = ENODEV;
    return -1;
}

int _stat_r(struct _reent *r, const char *name, struct stat *st)
{
    (void)name;
    (void)st;
    r->_errno = ENODEV;
    return -1;
}

int _unlink_r(struct _reent *r, const char *path)
{
    (void)path;
    r->_errno = ENODEV;
    return -1;
}

int _isatty_r(struct _reent *ptr, int fd)
{
    if (fd >= 0 && fd < 3)
    {
        return 1;
    }

    ptr->_errno = ENOTSUP;
    return -1;
}
