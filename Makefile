##
## EPITECH PROJECT, 2021
## B-MAT-200-COT-2-1-107transfer-deo-gratias.patinvoh
## File description:
## Makefile
##

SRC     =	 $(shell find . -type f -name '*.c')

OBJ     =       $(SRC:.c=.o)

NAME    =	110borwein

all:		$(NAME)

$(NAME):        $(OBJ)
	gcc -o $(NAME) $(SRC) -lm -g3

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re
deo
