#include "ft_printf.h"

void	constructor_zero(const char *str, t_extra *store)
{
	char 	*result;
	int 	size;
	int 	index;

	if (store->width)
	{
		result = malloc(store->width);
		(void)ft_memset(result, ' ', store->width - 1);
		result[store->width] = '\0';
		if ((BITMASK(store->flags, LEFT_FLAG)))
		{
			ft_putchar_fd('\0', 1);
			ft_putstr_fd(result, 1);
		}
		else
		{
			ft_putstr_fd(result, 1);
			ft_putchar_fd('\0', 1);
		}
		g_printed += ft_strlen(result);
	}
	else
		ft_putchar_fd('\0', 1);
}
