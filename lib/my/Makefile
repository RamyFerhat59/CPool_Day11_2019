##
## EPITECH PROJECT, 2018
## CPool_Day10
## File description:
## Makefile
##

SRCS	= 	my_putstr.c	\
		my_putchar.c	\
		../../my_params_to_list.c

OBJS	=	$(SRCS:.c=.o)

CC	=	gcc

NAME	=	libmy.a

HEADER	=	mylist.h

all:	$(NAME)

$(NAME):$(OBJS)
	ar rc libmy.a $(OBJ)
	mkdir ../../include/
	cp $(HEADER) ../../include/

clean:
	rm -f $(OBJS)
	rm -f $(NAME)
	rm -r -f ../../include
	rm -f ../../include/$(HEADER)

fclean: clean
	rm -f $(NAME)
	rm -f ../../include/$(HEADER)
	rm -f ../$(NAME)
	rm -r -f ../../include

re:	fclean all
