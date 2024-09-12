
FILES = ft_isalpha.c \
				ft_isdigit.c \
				ft_isascii.c \
				ft_isalnum.c \
				ft_isprint.c \
				ft_strlen.c \

OBJ = $(FILES:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -I.

NAME = libft.a

%.o: %.c Makefile libft.h
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re