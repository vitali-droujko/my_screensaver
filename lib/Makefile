##
## EPITECH PROJECT, 2020
## makefile
## File description:
## d10t0&
##

NAME	=	libmy.a

SRC	=	my/my_getnbr.c			\
		my/my_isneg.c			\
		my/my_putchar.c			\
		my/my_put_nbr.c			\
		my/my_putstr.c			\
		my/my_revstr.c			\
		my/my_strcat.c			\
		my/my_strcmp.c			\
		my/my_strcpy.c			\
		my/my_strlen.c			\

OBJ	=	$(SRC:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
