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
