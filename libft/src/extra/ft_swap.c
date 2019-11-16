#include "libft.h"

void	ft_swap(long long *a, long long *b)
{
	long long	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}