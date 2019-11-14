#include "ft_printf.h"

char	*constructor_hex(const char *str, t_extra *store)
{
	char	*result;
	int		size;
	int		index;
	int		num_len;

	index = 0;
	num_len = ft_strlen(str);
	size = (int) ft_max(store->precision, store->width);
	size = (int) ft_max(size, num_len);
	result = ft_calloc(size + 1, 1);
	store->width = store->width - store->precision < 0 ? 0 : store->width - store->precision;
	store->precision = store->precision - num_len < 0 ? 0 : store->precision - num_len;
	result = ft_memset(result, '0', store->precision);
	(void) ft_memmove((result + store->precision), str, num_len);
	if ((BITMASK(store->flags, LEFT_FLAG)))
		ft_memset(result + store->precision + num_len, ' ', store->width);
	else {
		ft_memmove(result + store->width, result, num_len + store->precision);
		ft_memset(result, ' ', store->width);
	}
	return (result);
}