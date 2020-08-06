#ifndef VCDRIVERS_STDIOBASE_H
#define VCDRIVERS_STDIOBASE_H

#include <stdint.h>
#include <unistd.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef STDIOBASE_UART_DEV
#define STDIOBASE_UART_DEV UART_DEV(1)
#endif

void vcstdio_init(void);

int vcstdio_write_one(char byte);

ssize_t vcstdio_write(const void *buffer, size_t len);

ssize_t vcstdio_read(void *buffer, size_t count);

int vcstdio_read_available(void);

#ifdef __cplusplus
}
#endif

#endif /* VCDRIVERS_STDIOBASE_H */
