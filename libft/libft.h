#ifndef LIBFT_H
# define LIBFT_H

// #include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

// typedef unsigned char t_char;
// typedef unsigned int t_int;

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);

#endif