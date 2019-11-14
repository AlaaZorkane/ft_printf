cmake_minimum_required(VERSION 3.13)
project(ft_printf C)

set(CMAKE_C_STANDARD 99)
include_directories(includes)

add_executable(ft_printf main.c includes/ft_printf.h ft_printf/ft_printf.c ft_printf/middlewares/print_middleware.c ft_printf/parsers/parse_char.c ft_printf/parsers/parse_string.c ft_printf/parsers/parse_decimal.c ft_printf/parsers/parse_unsigned.c ft_printf/parsers/parse_percent.c ft_printf/parsers/parse_hex.c ft_printf/parsers/parse_pointer.c ft_printf/extra/handle_width.c ft_printf/extra/handle_extra.c ft_printf/extra/handle_flags.c ft_printf/extra/handle_precision.c libft/src/extra/ft_split.c
        libft/src/extra/ft_tolower.c
        libft/src/extra/ft_toupper.c
        libft/src/files/ft_putchar_fd.c
        libft/src/files/ft_putendl_fd.c
        libft/src/files/ft_puthex_fd.c
        libft/src/files/ft_putnbr_fd.c
        libft/src/files/ft_putstr_fd.c
        libft/src/files/ft_putunsigned_fd.c
        libft/src/lists/ft_lstadd_back.c
        libft/src/lists/ft_lstadd_front.c
        libft/src/lists/ft_lstclear.c
        libft/src/lists/ft_lstdelone.c
        libft/src/lists/ft_lstiter.c
        libft/src/lists/ft_lstlast.c
        libft/src/lists/ft_lstmap.c
        libft/src/lists/ft_lstnew.c
        libft/src/lists/ft_lstsize.c
        libft/src/standard/ft_atoi.c
        libft/src/standard/ft_bzero.c
        libft/src/standard/ft_calloc.c
        libft/src/standard/ft_charcount.c
        libft/src/standard/ft_count_base.c
        libft/src/standard/ft_itoa.c
        libft/src/strings/ft_memccpy.c
        libft/src/strings/ft_memchr.c
        libft/src/strings/ft_memcmp.c
        libft/src/strings/ft_memcpy.c
        libft/src/strings/ft_memmove.c
        libft/src/strings/ft_memset.c
        libft/src/strings/ft_strcapitalize.c
        libft/src/strings/ft_strcat.c
        libft/src/strings/ft_strchr.c
        libft/src/strings/ft_strcmp.c
        libft/src/strings/ft_strcpy.c
        libft/src/strings/ft_strdup.c
        libft/src/strings/ft_strjoin.c
        libft/src/strings/ft_strlcat.c
        libft/src/strings/ft_strlcpy.c
        libft/src/strings/ft_strlen.c
        libft/src/strings/ft_strlowcase.c
        libft/src/strings/ft_strmapi.c
        libft/src/strings/ft_strncat.c
        libft/src/strings/ft_strncmp.c
        libft/src/strings/ft_strncpy.c
        libft/src/strings/ft_strnstr.c
        libft/src/strings/ft_strrchr.c
        libft/src/strings/ft_strrev.c
        libft/src/strings/ft_strstr.c
        libft/src/strings/ft_strtrim.c
        libft/src/strings/ft_strupcase.c
        libft/src/strings/ft_substr.c
        libft/src/type/ft_isalnum.c
        libft/src/type/ft_isalpha.c
        libft/src/type/ft_isascii.c
        libft/src/type/ft_isdigit.c
        libft/src/type/ft_islower.c
        libft/src/type/ft_isprint.c
        libft/src/type/ft_isspace.c
        libft/src/type/ft_isupper.c ft_printf/middlewares/constructor_middleware.c ft_printf/constructors/constructor_char.c
        ft_printf/constructors/constructor_string.c
        ft_printf/constructors/constructor_decimal.c
        ft_printf/constructors/constructor_hex.c
        ft_printf/constructors/constructor_pointer.c
        ft_printf/constructors/constructor_percent.c
        ft_printf/constructors/constructor_unsigned.c libft/src/extra/ft_max.c libft/src/standard/ft_ltoa.c libft/src/standard/ft_ltoa_base.c libft/src/standard/ft_ptoa.c)