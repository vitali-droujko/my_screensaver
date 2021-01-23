##
## EPITECH PROJECT, 2020
## makefileds
## File description:
## dcd
##

NAME	=	my_screensaver

SRC		=	src/main.c 			\
			src/screen1.c 		\
			src/screen2.c 		\
			src/screen3.c 		\
			src/screen4.c 		\
			src/screen5.c 		\
			src/putpixel.c 		\
			src/drawline.c 		\
			src/init_buff.c 	\
			src/put_color_on_screen.c 	\
			src/put_pixel_color.c 	\


LIB		=	/lib/

MYH		=	my.h

CFLAGS	+=	-I.$(MY)

MY	=	/include/

CC	=	gcc

FFLAGS 	=	-l csfml-graphics -l csfml-system -l csfml-audio -l csfml-window -lm

all	:	$(OBJ)
		make -C lib/ all
		$(CC) -o $(NAME) $(SRC) $(CFLAGS) $(FFLAGS) -L.$(LIB) -lmy

clean	:
		rm -f $(OBJ)
		make -C lib/ clean

fclean	:	clean
		rm -f $(NAME)
		make -C lib/ fclean


re	:	fclean all
		make -C lib/ re
