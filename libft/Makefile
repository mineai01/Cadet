NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -I $(INCLUDES)
INCLUDES = libft.h
FILES = ft_isalpha.c \
				ft_isdigit.c \

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)
	echo " libft: clean: objects cleaned."

fclean: clean
	rm -f $(NAME)
	echo "Livft: fclean: library deleted."

re: fclean all

.PHONY: c;ean fclean all re