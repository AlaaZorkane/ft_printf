#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#if defined(__APPLE__) && defined(__MACH__)
#define NULL_STR "0x0"
#else
#define NULL_STR "(nil)"
#endif

#include "libft.h"
#include <stdio.h>
#include <stdarg.h>

va_list g_argp;
int g_iterator;
int g_printed;

typedef	struct		s_extra
{
	int flags;
	int width;
	int precision;
}					t_extra;

int ft_printf(const char *str, ...);

void print_middleware(const char *format);

char *constructor_middleware(const char *str, t_extra *store, char type);

void parse_char(const char *format, t_extra *store);

void parse_string(const char *format, t_extra *store);

void parse_percent(const char *format, t_extra *store);

void parse_decimal(const char *format, t_extra *store);

void parse_unsigned(const char *format, t_extra *store);

void parse_pointer(const char *format, t_extra *store);

void parse_hex(const char *format, t_extra *store);

int handle_width(const char *format);

t_extra *handle_extra(const char *format);

int handle_flags(const char *format);

int handle_precision(const char *format);

char	*constructor_char(const char *str, t_extra *store);
char	*constructor_decimal(const char *str, t_extra *store);
char	*constructor_hex(const char *str, t_extra *store);
char	*constructor_percent(const char *str, t_extra *store);
char	*constructor_pointer(const char *str, t_extra *store);
char	*constructor_string(const char *str, t_extra *store);
char	*constructor_unsigned(const char *str, t_extra *store);


// DEFINES
#define LEFT_FLAG (1 << 1) // 0010
#define ZERO_FLAG (1 << 2) // 0100

#define BITMASK(BITS,MASK) ( (BITS & MASK) == MASK)

#endif
