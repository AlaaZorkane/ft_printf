#include <stdint.h>
#include "ft_printf.h"

void	parse_pointer(const char *format, t_extra *store) {
	void	*ptr_to_print;
	char 	*result;
	char	*str_ptr;

	ptr_to_print = va_arg(g_argp, void*);
	str_ptr = ft_ptoa(ptr_to_print);
	result = constructor_middleware(str_ptr, store, 'p');
	ft_putstr_fd(result, 0);
	g_printed += ft_strlen(result);
	free(result);
	g_iterator++;
}