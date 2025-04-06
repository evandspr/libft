NAME := libft.a
CC:=cc
INCLUDES = ./includes
CFLAGS:= -Wall -Wextra -Werror
SRC := ./src/ft_isalpha.c ./src/ft_isdigit.c ./src/ft_isalnum.c ./src/ft_isascii.c \
       ./src/ft_isprint.c ./src/ft_strlen.c ./src/ft_memset.c ./src/ft_bzero.c \
       ./src/ft_memcpy.c ./src/ft_strlcpy.c ./src/ft_strlcat.c ./src/ft_toupper.c \
       ./src/ft_tolower.c ./src/ft_strrchr.c ./src/ft_strchr.c ./src/ft_strncmp.c \
       ./src/ft_memchr.c ./src/ft_memcmp.c ./src/ft_strnstr.c ./src/ft_atoi.c \
       ./src/ft_calloc.c ./src/ft_strdup.c ./src/ft_memmove.c ./src/ft_substr.c \
       ./src/ft_strjoin.c ./src/ft_putchar_fd.c ./src/ft_putstr_fd.c \
       ./src/ft_putendl_fd.c ./src/ft_putnbr_fd.c ./src/ft_strtrim.c \
       ./src/ft_split.c ./src/ft_itoa.c ./src/ft_strmapi.c ./src/ft_striteri.c
OBJ:=$(SRC:.c=.o)

all: $(NAME)

%.o: %.c $(INCLUDES)/libft.h
	$(CC) $(CFLAGS) -I $(INCLUDES) -c -o $@ $<

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f ./src/*.o
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
