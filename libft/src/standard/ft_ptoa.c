#include "libft.h"

static int	hex_digit(int v) {
	if (v >= 0 && v < 10)
		return ('0' + v);
	else
		return ('a' + v - 10);
}

char		*ft_ptoa(void *_ptr)
{
	int			index;
	int 		jndex;
	uintptr_t	ptr;
	char		*result;

	ptr = (uintptr_t)_ptr;
	if (_ptr == NULL) {
		return (ft_strdup("0x0"));
	}
	result = ft_calloc(15, 1);
	result[0] = '0';
	result[1] = 'x';
	index = (sizeof(ptr) << 3) - 4;
	jndex = 2;
	while (hex_digit((ptr >> index) & 0xf) == '0')
		index -= 4;
	while (index >= 0) {
		result[jndex++] = (char)hex_digit((ptr >> index) & 0xf);
		index -= 4;
	}
	return (result);
}
