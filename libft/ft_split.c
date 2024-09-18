#include "libft.h"

static int word_count(const char *str, char c);
static char *fill_word(const char *str, int start, int end);
static void *ft_fre(char **strs, int conunt);
static void ft_initiate_vars(size_t *i, int *j, int *s_word);

char **ft_split(char const *s, char c)
{
    char **res;
    size_t i;
    int j;
    int s_word;

    ft_initiate_vars(&i, &j, &s_word);

    res = ft_calloc((word_count(s, c) + 1), sizeof(char *));
    if (!res)
        return (NULL);

    while (i <= ft_strlen(s))
    {
        if (s[i] != c && s_word < 0)
            s_word = i;
        
        else if ((s[i] == c) || i == ft_strlen(s) && s_word >= 0)
        {
            res[j] = fill_word(s, s_word, i);

            if(!(res[j]))
                return (ft_free(res, j));
            
            if (!(res[j]))
                return (ft_free(res, j));
            
            s_word = -1;
            j++;
        }
        j++;
    }
    i++;

    return (res[j]);
}

static void ft_initiate_vars(size_t *i, int *j, int *s_word)
{

}