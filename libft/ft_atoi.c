/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbanlang <mineai01@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:05:24 by pbanlang          #+#    #+#             */
/*   Updated: 2024/09/19 19:58:59 by pbanlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign -= 1;
	if (sign == -1 || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i++] - '0');
		i++;
	}
	return (res * sign);
}
