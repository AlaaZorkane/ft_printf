#include <limits.h>
#include "ft_printf.h"

char	*constructor_string(const char *str, t_extra *store)
{
	char 	*result;
	int 	size;
	int 	str_len;

	str_len = ft_min(store->precision > 0 ? store->precision : LONG_LONG_MAX, ft_strlen(str));
	if (store->precision == -1)
		str_len = 0;
	store->width = store->width < str_len ? 0 : store->width - str_len;
	size =  str_len + store->width;
	result = ft_calloc(size + 1, 1);
	if (!(BITMASK(store->flags, LEFT_FLAG)))
	{
		ft_memset(result, ' ', store->width);
		ft_memmove(result + store->width, str, str_len);
	}
	else
	{
		ft_memmove(result, str, str_len);
		ft_memset(result + str_len, ' ', store->width);
	}
	return (result);
}