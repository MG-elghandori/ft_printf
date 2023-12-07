SRC=ft_printf.c \
ft_putchar.c \
ft_putnbr.c  \
ft_putstr.c \
ft_hexadecimal.c \


NAME = libftprintf.a 


OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = cc

all : $(NAME)

$(NAME) : $(OBJ)
			ar r $(NAME) $?

clean :
			rm -f $(OBJ)

fclean : clean
			rm -f $(NAME)

re : fclean all