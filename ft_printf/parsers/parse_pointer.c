#include <stdint.h>
#include "ft_printf.h"

int hex_digit(int v) {
	if (v >= 0 && v < 10)
		return ('0' + v);
	else
		return ('a' + v - 10);
}

int null_ptr_case()
{
	char	*null_to_print;
	int 	printed;

	null_to_print = ft_strdup(NULL_STR);
	ft_putstr_fd(null_to_print, 0);
	printed = ft_strlen(null_to_print);
	free(null_to_print);
	return (printed);
}

int print_address_hex(void *p0) {
	int index;
	int printed;
	uintptr_t p = (uintptr_t) p0;

	if (p0 == NULL) {
		return (null_ptr_case());
	}
	printed = 2;
	ft_putchar_fd('0', 0);
	ft_putchar_fd('x', 0);
	index = (sizeof(p) << 3) - 4;
	while (hex_digit((p >> index) & 0xf) == '0')
		index -= 4;
	while (index >= 0) {
		ft_putchar_fd((char)hex_digit((p >> index) & 0xf), 0);
		printed++;
		index -= 4;
	}
    return (printed);
}

void parse_pointer(const char *format, t_extra *store) {
	void	*ptr_to_print;

	ptr_to_print = va_arg(g_argp, void*);
	g_printed += print_address_hex(ptr_to_print);
	g_iterator++;
}