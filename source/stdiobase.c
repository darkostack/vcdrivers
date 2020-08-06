#include <vcdrivers/periph/uart.h>
#include <vcdrivers/stdiobase.h>

__attribute__((weak)) void vcstdio_init(void)
{
    vcuart_init(STDIOBASE_UART_DEV, 115200, NULL, NULL);
}

__attribute__((weak)) int vcstdio_write_one(char byte)
{
    (void) byte;
    return 0;
}

ssize_t vcstdio_write(const void *buffer, size_t len)
{
    return vcuart_write(STDIOBASE_UART_DEV, (const uint8_t *)buffer, len);
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
