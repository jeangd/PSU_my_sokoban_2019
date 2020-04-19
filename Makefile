##
## EPITECH PROJECT, 2019
## CPool_Day12_2019
## File description:
## Makefile
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CFLAGS	=	-g

all:	$(NAME)

lib_com:
	cd ./lib/my && $(MAKE)

$(NAME):	$(OBJ) lib_com
	$(CC) $(OBJ) -o $(NAME) -L ./lib/my -I./include/ -lmy -lncurses

clean:
	cd ./lib/my && rm -f $(OBJ)
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
