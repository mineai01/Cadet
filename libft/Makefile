
FILES = ft_isalpha.c \
				ft_isdigit.c \
				ft_isascii.c \
				ft_isalnum.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strchr.c \

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