#include "ft_printf.h"

char	*constructor_pointer(const char *str, t_extra *store)
{
	return (constructor_decimal(str, store));
}