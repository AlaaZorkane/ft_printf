#include "ft_printf.h"

void parse_char(const char *format, t_extra *store)
{
    char	char_to_print;
    char 	*ptr;
    char 	*result;

    char_to_print = va_arg(g_argp, int);
    ptr = malloc(2);
    ptr[0] = char_to_print;
    ptr[1] = '\0';
    result = constructor_middleware(ptr, store, 'c');
    ft_putstr_fd(result, 0);
    g_printed += ft_strlen(result);
    free(result);
    free(ptr);
    g_iterator++;
}

