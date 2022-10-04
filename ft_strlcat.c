/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:15:17 by smartin           #+#    #+#             */
/*   Updated: 2022/09/26 12:59:26 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//#include <string.h>
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	len_dst = 0;
	len_src = 0;
	while (dst[len_dst] != '\0')
		len_dst++;
	if (dstsize < len_dst)
	{
		while (src[len_src] != '\0')
			len_src++;
		return (dstsize + len_src);
	}
	i = len_dst;
	j = 0;
	while (dstsize > 0 && i < dstsize - 1 && src[j] != '\0')
		dst[i++] = src[j++];
	dst[i] = '\0';
	while (src[len_src])
		len_src++;
	return (len_src + len_dst);
}
/*int	main (void)
{
	char src[] = "venga";
	char dst[] = "chao";
	printf("original %zu\n", strlcat(dst, src, 5));
	printf("replica %zu\n", ft_strlcat(dst, src, 5));
	return (0);
}*/
