NAME := libft.a
CC := cc
INCLUDES := ./includes
CFLAGS := -Wall -Wextra -Werror -D BUFFER_SIZE=32
SRC := ./src/ft_atoi.c ./src/ft_isalpha.c ./src/ft_itoa.c ./src/ft_memmove.c \
       ./src/ft_printf_utils2.c ./src/ft_putchar_fd.c ./src/ft_split.c \
       ./src/ft_strjoin.c ./src/ft_strmapi.c ./src/ft_strtrim.c \
       ./src/get_next_line.c ./src/ft_bzero.c ./src/ft_isascii.c \
       ./src/ft_memchr.c ./src/ft_memset.c ./src/ft_printhexa.c \
       ./src/ft_putendl_fd.c ./src/ft_strchr.c ./src/ft_strlcat.c \
       ./src/ft_strncmp.c ./src/ft_substr.c ./src/get_next_line_utils.c \
       ./src/ft_calloc.c ./src/ft_isdigit.c ./src/ft_memcmp.c ./src/ft_printf.c \
       ./src/ft_printnbr.c ./src/ft_putnbr_fd.c ./src/ft_strdup.c \
       ./src/ft_strlcpy.c ./src/ft_strnstr.c ./src/ft_tolower.c \
       ./src/ft_isalnum.c ./src/ft_isprint.c ./src/ft_memcpy.c \
       ./src/ft_printf_utils.c ./src/ft_printptr.c ./src/ft_putstr_fd.c \
       ./src/ft_striteri.c ./src/ft_strlen.c ./src/ft_strrchr.c \
       ./src/ft_toupper.c
OBJ := $(SRC:.c=.o)
GREEN=\033[32m
RED=\033[31m
RESET=\033[0m

all: $(NAME)

%.o: %.c $(INCLUDES)/libft.h $(INCLUDES)/ft_printf.h $(INCLUDES)/get_next_line.h
	@$(CC) $(CFLAGS) -I $(INCLUDES) -c -o $@ $<

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
clean:
	@rm -f $(OBJ)
fclean: clean
	@rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
