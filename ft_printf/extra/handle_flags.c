#include "ft_printf.h"

int handle_flags(const char *format)
{
    int flags;

    flags = 0;
    while (format[g_iterator] == '0' || format[g_iterator] == '-')
    {
        if (format[g_iterator] == '0')
            flags |= ZERO_FLAG;
        else if (format[g_iterator] == '-')
            flags |= LEFT_FLAG;
        g_iterator++;
    }
    return (flags);
}

