#include "ft_printf.h"

#define TEST "%-6.13u\n", 164

int main()
{
    int ret1;
    int ret2;
    int *ptr;
    int a;

    a = 5;
    ptr = &a;
    ret1 = printf(TEST);
    ret2 = ft_printf(TEST);
    printf("printf = %d | ft_printf = %d", (unsigned int)ret1, (unsigned int)ret2);
    return 0;
}