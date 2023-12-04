SRC=ft_printf.c \
ft_putchar.c \
ft_putnbr.c  \
ft_putstr.c \
ft_strlen.c \
ft_hexadecimal.c

NAME = libftprintf.a 


OBJ = $(SRC:.c=.o)
CFLAGG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
			ar r $(NAME) $(OBJ)

clean :
			rm -f $(OBJ)

fclean : clean
			rm -f $(NAME)

re : fclean all