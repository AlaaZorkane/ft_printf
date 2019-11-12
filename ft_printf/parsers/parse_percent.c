#include "ft_printf.h"

void parse_percent(const char *format, t_extra *store)
{
    ft_putchar_fd('%', 0);
    g_iterator++;
    g_printed++;
}