#include "ft_printf.h"

void parse_string(const char *format, t_extra *store)
{
    char *string_to_print;

    string_to_print = va_arg(g_argp, char*);
    ft_putstr_fd(string_to_print, 0);
    g_printed += ft_strlen(string_to_print);
    g_iterator++;
}

