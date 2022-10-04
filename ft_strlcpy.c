/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:10:25 by smartin           #+#    #+#             */
/*   Updated: 2022/09/26 12:48:42 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//#include <string.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;

	x = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src [i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	}
	return (x);
}
/*int	main(void)
{
	char src[] = "aloha";
	char dst[] = "hola";
	printf("original %lu\n", strlcpy(dst, src, 3));
	printf("replica %zu\n", ft_strlcpy(dst, src, 3));
	return (0);
}*/
