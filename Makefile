##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## cesaretti.enzo
##

CYAN= \e[96m
REDBOLD=\033[0;31;1m
GREENBOLD=\033[0;32;1m
BOLD=\033[1m
NORMAL=\033[0m

SOURCES	=	src/

LINKEDLIST = src/linkedlist

SRC		=	$(SOURCES)/my_printf.c		\
			$(SOURCES)/my_putchar.c		\
			$(SOURCES)/my_put_nbr.c		\
			$(SOURCES)/my_putstr.c		\
			$(SOURCES)/my_revstr.c		\
			$(SOURCES)/my_strlen.c		\
			$(LINKEDLIST)/gll.c			\
			$(LINKEDLIST)/gll_print.c

OBJ		=	$(SRC:.c=.o)

NAME	=	DataStruct.a

INCLUDES	=	-I./includes

CFLAGS	=	-W	$(INCLUDES)

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar -rc $(NAME) $(OBJ)
	@echo -e "${GREENBOLD}[DataStruct] Compilation end successfully${NORMAL}"

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re:	fclean all
