/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbanlang <mineai01@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:06:51 by pbanlang          #+#    #+#             */
/*   Updated: 2024/09/18 20:06:52 by pbanlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    int i;

    if(!dst && !src)
    {
        return (NULL);
    }

    if (dst > src)
    {
        i = (int)len -1;
        while (i >= 0)
        {
            *(char *)(dst+i) = *(char *)(src+i);
            i--;
        }
    }
    else
    {
        i = 0;
        while(i < (int)len)
        {
            *(char *)(dst+i) = *(char *)(src+i);
            i++;

        }
    }
    return (dst);

}