#include "ft_printf.h"

char	*constructor_decimal(const char *str, t_extra *store)
{
	char	*result;
	int		size;
	int		num_len;
	char 	zero_flag;

	num_len = ft_strlen(str);
	size = (int) ft_max(store->precision, store->width);
	size = (int) ft_max(size, num_len);
	result = ft_calloc(size + 1, 1);
	store->precision = store->precision - num_len < 0 ? 0 : store->precision - num_len;
	store->width = store->width - store->precision - num_len < 0
			? 0 : store->width - store->precision - num_len;
	result = ft_memset(result, '0', store->precision);
	(void) ft_memmove((result + store->precision), str, num_len);
	zero_flag = BITMASK(store->flags, ZERO_FLAG);
	if ((BITMASK(store->flags, LEFT_FLAG)))
		ft_memset(result + store->precision + num_len,
				  zero_flag & LEFT_FLAG ? '0' : ' ', store->width);
	else
	{
		ft_memmove(result + store->width, result, num_len + store->precision);
		ft_memset(result, zero_flag && (store->precision < store->width) ? '0' : ' ', store->width);
	}
	return (result);
}