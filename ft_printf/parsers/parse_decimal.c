#include "ft_printf.h"

void parse_decimal(const char *format, t_extra *store)
{
    int     nbr_to_print;
    char    *result;
    char    *str_nbr;

    nbr_to_print = va_arg(g_argp, int);
    str_nbr = ft_itoa(nbr_to_print);
    result = constructor_middleware(str_nbr, store, 'd');
    ft_putstr_fd(result, 0);
    g_printed += ft_strlen(result);
    free(result);
    free(str_nbr);
    g_iterator++;
}