#include "ft_printf.h"

void parse_unsigned(const char *format, t_extra *store)
{
	unsigned int	nbr_to_print;
	char			*result;
	char			*str_nbr;

	nbr_to_print = va_arg(g_argp, unsigned int);
	str_nbr = ft_ltoa(nbr_to_print);
	result = constructor_middleware(str_nbr, store, 'u');
	ft_putstr_fd(result, 0);
	g_printed += ft_strlen(result);
	free(result);
	free(str_nbr);
	g_iterator++;
}