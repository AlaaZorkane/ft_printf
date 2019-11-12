#include "ft_printf.h"

void    parse_hex(const char *format, t_extra *store)
{
    int				maj;
    unsigned int	hex_to_print;
    int 			chars_printed;

    maj = format[g_iterator] == 'X' ? 1 : 0;
    hex_to_print = va_arg(g_argp, unsigned int);
    chars_printed = ft_puthex_fd(hex_to_print, maj, 0);
    g_printed += chars_printed;
    g_iterator++;
}