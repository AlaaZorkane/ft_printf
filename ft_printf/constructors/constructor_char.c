#include "ft_printf.h"

char	*constructor_char(const char *str, t_extra *store)
{
	char	*result;
	int 	size;
	int 	index;

	size = store->width > 1 ? store->width : 1;
	result = malloc(size + 1);
	result[0] = str[0];
	index = 1;
	while (index < size)
		result[index++] = ' ';
	result[index] = '\0';
	if (!(BITMASK(store->flags, LEFT_FLAG)))
		ft_strrev(result);
	return (result);
}