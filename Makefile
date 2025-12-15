##
## EPITECH PROJECT, 2025
## Lib vector
## File description:
## Makefile
##

SRC = $(addprefix src/, \
	metadata.c \
	create.c \
	destroy.c \
	realloc.c \
	push_back.c)

OBJ = $(SRC:.c=.o)

NAME = libvector.a

CPPFLAGS = -iquote./include -iquote./src

CFLAGS += -Wall -Wextra

all:    $(NAME)

$(NAME):    $(OBJ)
	ar rc $(NAME) $(OBJ)

deploy: $(NAME)
	cp $(NAME) ../
	cp include/vector.h ../../include/vector.h

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)
	$(RM) ../../include/vector.h

re: fclean all

.PHONY: all deploy clean fclean re
