#include "ft_printf.h"

void parse_string(const char *format, t_extra *store)
{
    char	*string_to_print;
    char	*result;

    string_to_print = va_arg(g_argp, char*);
    if (string_to_print == NULL)
    	string_to_print = ft_strdup("(null)");
	result = constructor_middleware(string_to_print, store, 's');
	ft_putstr_fd(result, 0);
	g_printed += ft_strlen(result);
	free(result);
    g_iterator++;
}

