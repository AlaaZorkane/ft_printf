#include "ft_printf.h"

char *constructor_middleware(const char *str, t_extra *store, char type)
{
	char	*result;

	result = NULL;
	if (type == 'c')
		result = constructor_char(str, store);
	else if (type == 'd')
	    result = constructor_decimal(str, store);
	else if (type == 'x')
        result = constructor_hex(str, store);
	else if (type == '%')
        result = constructor_percent(str, store);
	else if (type == 'p')
        result = constructor_pointer(str, store);
	else if (type == 's')
        result = constructor_string(str, store);
	else if (type == 'u')
        result = constructor_unsigned(str, store);
	return (result);
}
