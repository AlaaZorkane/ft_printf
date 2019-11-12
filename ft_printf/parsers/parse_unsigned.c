#include "ft_printf.h"

void parse_unsigned(const char *format, t_extra *store)
{
    unsigned int nbr_to_print;

    nbr_to_print = va_arg(g_argp, unsigned int);
    ft_putunsigned_fd(nbr_to_print, 0);
    g_printed += ft_count_base(nbr_to_print, 10);
    g_iterator++;
}