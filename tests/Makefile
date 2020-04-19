##
## EPITECH PROJECT, 2019
## criterion
## File description:
## Makefile
##

CC = gcc -g

SRC	=	$(wildcard ../lib/my/*.c)

UNIT = $(wildcard ./criterion/*.c)

OBJ	=	$(SRC:.c=.o) $(UNIT:.c=.o)

NAME = unit_tests

CRFLAGS = --coverage -lcriterion

CFLAGS = -Wextra -Wall -I ../include

all: $(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CRFLAGS) $(CFLAGS)

clean: 
		rm -f *.gcda
		rm -f *.gcno

fclean: clean
		rm -f $(NAME)

re: fclean all