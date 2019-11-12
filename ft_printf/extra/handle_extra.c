#include "ft_printf.h"

t_extra *handle_extra(const char *format)
{
	t_extra *store;
    
    store = malloc(sizeof(t_extra));
    store->flags = handle_flags(format);
    store->width = handle_width(format);
    store->precision = handle_precision(format);
    return (store);
}
