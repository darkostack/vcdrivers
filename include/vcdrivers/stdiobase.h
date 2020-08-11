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
