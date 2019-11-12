#include "ft_printf.h"

void	print_middleware(const char *format) {
    t_extra *store;

	g_iterator++; // skips '%'
    store = handle_extra(format);
    if (format[g_iterator] == 'c')
        parse_char(format, store);
    else if (format[g_iterator] == 's')
        parse_string(format, store);
    else if (format[g_iterator] == 'd' || format[g_iterator] == 'i')
        parse_decimal(format, store);
    else if (format[g_iterator] == 'u')
        parse_unsigned(format, store);
    else if (format[g_iterator] == 'x' || format[g_iterator] == 'X')
        parse_hex(format, store);
    else if (format[g_iterator] == 'p')
        parse_pointer(format, store);
    else if (format[g_iterator] == '%')
        parse_percent(format, store);
    else
        g_iterator++;
    free(store);
}