#include "ft_printf.h"

void parse_string(const char *format, t_extra *store)
{
    char	*string_to_print;
    char	*result;

    string_to_print = va_arg(g_argp, char*);
	result = constructor_middleware(string_to_print, store, 's');
	ft_putstr_fd(result, 0);
    g_printed += ft_strlen(string_to_print);
    g_iterator++;
}

