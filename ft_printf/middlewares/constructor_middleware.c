#include "ft_printf.h"

char *constructor_middleware(const char *str, t_extra *store, char type)
{
	char	*result;

	result = NULL;
	if (type == 'c')
		result = constructor_char(str, store);
	return (result);
}
