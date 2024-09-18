/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbanlang <mineai01@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:04:59 by pbanlang          #+#    #+#             */
/*   Updated: 2024/09/18 20:05:03 by pbanlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
    char *ptr;
    
    ptr = (char *) s;

    while (n > 0)
    {
        *(ptr++) = 0;

        n--;
    }
    return (s);
}