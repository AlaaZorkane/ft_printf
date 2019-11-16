#include "ft_printf.h"

int handle_precision(const char *format)
{
    int precision;
    int index;
    char *precision_str;

    precision = 0;
    index = g_iterator;
	while (format[index] == '.')
    {
        index++;
		if (format[index] == '*')
		{
			g_iterator = index + 1;
			return (va_arg(g_argp, int));
		}
        while(ft_isdigit(format[index]))
            index++;
        precision_str = ft_substr(format, g_iterator + 1, index - 2);
        precision = ft_atoi(precision_str);
        if (precision == 0)
        	precision = -1;
        free(precision_str);
    }
    g_iterator = index;
    return (precision);
}

