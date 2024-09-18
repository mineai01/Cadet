#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    char *res;


    i = 0;
    res = NULL;
    while (s[i])
    {
        if(s[i] == (char)c)
        {
            res = ((char *)(s+i));
        }
        i++;
    }
    if(s[i] == c)
        res = ((char *)(s+i));
    return (res);
}