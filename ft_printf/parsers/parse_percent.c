#include "ft_printf.h"

void parse_percent(const char *format, t_extra *store)
{
	char	*ptr;
	char	*result;

	ptr = ft_strdup("%");
	result = constructor_middleware(ptr, store, '%');
	ft_putstr_fd(result, 0);
	g_printed += ft_strlen(result);
	free(result);
	free(ptr);
	g_iterator++;
}