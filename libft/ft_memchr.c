/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbanlang <mineai01@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:06:32 by pbanlang          #+#    #+#             */
/*   Updated: 2024/09/18 20:06:34 by pbanlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    if(!s)
    {
        return (NULL);
    }
    i = 0;
    while(i < n)
    {
        if(*(unsigned char*)(s+i) == (unsigned char)c)
        {
            return ((void *)(s+i));
        }
        i++;
    }
    
    return (NULL);
}