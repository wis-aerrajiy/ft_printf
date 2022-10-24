NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC  = ft_printf.c	srcs/ft_putchar.c	srcs/ft_putnbr.c	srcs/ft_putunsigned.c	srcs/ft_put_addr.c \
		srcs/ft_puthexa.c	srcs/ft_putstr.c srcs/ft_strlen.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re