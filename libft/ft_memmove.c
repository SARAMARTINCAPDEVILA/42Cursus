/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:41:52 by smartin           #+#    #+#             */
/*   Updated: 2022/09/26 12:40:10 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (d < s)
	{
		ft_memcpy(dst, src, len);
	}
	else if (d > s)
	{
		while (len > 0)
		{
		d[len -1] = s[len -1];
		len--;
		}
	}	
	return (dst);
}
/*int	main (void)
{
	char src[] = "chao";
	char dst[] = "bye";
	printf("original %s\n", memmove(dst, src, 2));
	printf("replica %s\n", ft_memmove(dst, src, 2));
	return (0);
}*/
