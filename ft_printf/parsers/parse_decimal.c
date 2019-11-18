#include "ft_printf.h"

void parse_decimal(const char *format, t_extra *store)
{
    char    *result;
    char    *str_nbr;
    int     nbr_to_print;
    int 	minus;

	minus = 0;
    nbr_to_print = va_arg(g_argp, int);
    str_nbr = ft_itoa(nbr_to_print);
    if (str_nbr[0] == '-')
	{
    	store->precision += 1;
    	str_nbr[0] = '0';
    	minus = 1;
	}
    result = constructor_middleware(str_nbr, store, 'd');
    if (minus)
    	*(ft_strchr(result, '0')) = '-';
    ft_putstr_fd(result, 0);
    g_printed += ft_strlen(result);
    free(result);
    free(str_nbr);
    g_iterator++;
}