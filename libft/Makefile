
FILES = ft_isalpha.c \
				ft_isdigit.c \
				ft_isascii.c \
				ft_isalnum.c \
				ft_isprint.c \
				ft_strlen.c \

OBJ = $(FILES:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -I.

NAME = libft.a

all: $(NAME)

$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re