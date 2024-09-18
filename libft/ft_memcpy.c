/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbanlang <mineai01@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:06:45 by pbanlang          #+#    #+#             */
/*   Updated: 2024/09/18 20:06:45 by pbanlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *t_dst;
    unsigned char *t_src;

    if(dst == (void *)0 && src == (void *)0)
    {
        return (dst);
    }

    t_dst = (unsigned char *) dst;
    t_src = (unsigned char *) src;

    while (n > 0)
    {
        *(t_dst++) = *(t_src++);
        n--;
    }
    return (dst);
}