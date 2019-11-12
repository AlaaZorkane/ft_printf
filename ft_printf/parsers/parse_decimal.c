#include "ft_printf.h"

void parse_decimal(const char *format, t_extra *store)
{
    int nbr_to_print;

    nbr_to_print = va_arg(g_argp, int);
    ft_putnbr_fd(nbr_to_print, 0);
    g_printed += ft_count_base(nbr_to_print, 10);
    g_iterator++;
}