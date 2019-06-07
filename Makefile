NAME	=	emo

LIBNAME	=	libemolib.a

SRC	=	src/main.c	\
		src/help.c	\
		src/emo_print.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -W -g3 -Iinclude

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

set_command:
	sudo mv $(NAME) /bin

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)

re:	clean fclean all

.PHONY:	all clean fclean re
