#include "ft_printf.h"

void    parse_hex(const char *format, t_extra *store)
{
	char    *result;
	char    *str_nbr;
    unsigned int	hex_to_print;

    hex_to_print = va_arg(g_argp, unsigned int);
	str_nbr = ft_ltoa_base(hex_to_print, 16);
	if (format[g_iterator] == 'X')
		str_nbr = ft_strupcase(str_nbr);
	result = constructor_middleware(str_nbr, store, 'd');
	ft_putstr_fd(result, 0);
	g_printed += ft_strlen(result);
	free(result);
	free(str_nbr);
	g_iterator++;
}