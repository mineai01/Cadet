#include "libft.h"

int ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	if (!str)
		return (0);
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
    {
        i++;
    }
    
    sign = (str[i] == '-') ? -1 : 1;
    if (sign == -1 || str[i] == '+')
    {
        i++;
    }

    res = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i++] - '0');
    }
    return (res * sign);
        
}