#include "ft_printf.h"

int ft_printf(const char *format, ...) {
    g_iterator = 0;
    g_printed = 0;
    va_start(g_argp, format);
    while (format[g_iterator] != '\0') {
        if (format[g_iterator] == '%')
            print_middleware(format);
        else {
            ft_putchar_fd(format[g_iterator++], 0);
            g_printed++;
        }
    }
    va_end(g_argp);
    return (g_printed);
}
