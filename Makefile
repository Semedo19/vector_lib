##
## EPITECH PROJECT, 2025
## Lib vector
## File description:
## Makefile
##

SRC = 

OBJ = $(SRC:.c=.o)

NAME = libvector.a

CPPFLAGS = -iquote./include

CFLAGS += -Wall -Wextra

all:    $(NAME)

$(NAME):    $(OBJ)
	ar rc $(NAME) $(OBJ)

deploy: $(NAME)
	cp $(NAME) ../
	cp include/vector.h ../../include/

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)
	$(RM) ../../include/vector.h

re: fclean all

.PHONY: all deploy clean fclean re
