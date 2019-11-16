#include "ft_printf.h"

char	*constructor_pointer(const char *str, t_extra *store)
{
	char	*result;
	int 	flag;
	int 	size;
	int 	addr_len;

	if (BITMASK(store->flags, LEFT_FLAG) && BITMASK(store->flags, ZERO_FLAG))
		store->flags = (1 << 2);
	result = constructor_decimal(str, store);
	return (result);
}