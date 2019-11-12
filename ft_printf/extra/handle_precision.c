#include "ft_printf.h"

int handle_precision(const char *format)
{
    int precision;
    int index;
    char *precision_str;

    precision = 0;
    index = g_iterator;
    if (format[index] == '.')
    {
        index++;
        while(ft_isdigit(format[index] - '0'))
            index++;
        precision_str = ft_substr(format, g_iterator + 1, index - 1);
        precision = ft_atoi(precision_str);
        free(precision_str);
    }
    g_iterator = index;
    return (precision);
}

