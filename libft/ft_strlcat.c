/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbanlang <mineai01@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:07:36 by pbanlang          #+#    #+#             */
/*   Updated: 2024/09/18 21:05:44 by pbanlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	src_l;
	size_t	dst_l;
	size_t	i;
	size_t	j;

	src_l = ft_strlen(src);
	dst_l = ft_strlen(dst);
	j = dst_l;
	i = 0;
	if (dst_l >= dsize)
	{
		dst_l = dsize;
	}
	if (dst_l < dsize - 1 && dsize > 0)
	{
		while (src[i] && dst_l + i < dsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	return (dst_l + src_l);
}
