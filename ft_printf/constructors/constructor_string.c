#include <limits.h>
#include "ft_printf.h"

static char *string_build(char *result, t_extra *store, const char *str, int str_len)
{
	if (!(BITMASK(store->flags, LEFT_FLAG)))
	{
		ft_memset(result, BITMASK(store->flags, ZERO_FLAG)
						  ? '0' : ' ', store->width);
		ft_memmove(result + store->width, str, str_len);
	}
	else
	{
		ft_memmove(result, str, str_len);
		ft_memset(result + str_len, ' ', store->width);
	}
}

char	*constructor_string(const char *str, t_extra *store)
{
	char 	*result;
	int 	size;
	int 	str_len;

	str_len = ft_min(store->precision > 0 ?
					 store->precision : LONG_LONG_MAX, ft_strlen(str));
	if (store->precision == 0)
		str_len = 0;
	if (store->width < 0)
	{
		store->width = -store->width;
		store->flags |= LEFT_FLAG;
	}
	store->width = store->width < str_len ? 0 : store->width - str_len;
	size = str_len + store->width;
	result = ft_calloc(size + 1, 1);
	return (string_builder(result, store, str, str_Len));
}