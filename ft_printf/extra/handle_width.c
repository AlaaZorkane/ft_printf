#include "ft_printf.h"

int handle_width(const char *format)
{
    char *width_str;
    int width;
    int index;

    index = g_iterator;
    if (format[index] == '*')
	{
    	g_iterator++;
		return (va_arg(g_argp, int));
	}
    while(ft_isdigit(format[index]))
        index++;
    width_str = ft_substr(format, g_iterator, index - 1);
    width = ft_atoi(width_str);
    free(width_str);
    g_iterator = index;
    return (width);
}

