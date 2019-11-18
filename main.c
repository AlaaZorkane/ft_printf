#include "ft_printf.h"

#define TEST "%-8.1s\n", "hello"

int main()
{
    int ret1;
    int ret2 = 0;
    int *ptr;
    int a;

    a = 5;
    ptr = &a;
    ret1 = printf(TEST);
    ret2 = ft_printf(TEST);
    printf("printf = %u | ft_printf = %u", (unsigned int)ret1, (unsigned int)ret2);
    return 0;
}