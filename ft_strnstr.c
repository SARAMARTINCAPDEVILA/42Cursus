/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:08:17 by smartin           #+#    #+#             */
/*   Updated: 2022/09/27 13:58:44 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			c;
	char			*h;
	char			*n;

	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (!*n || n[0] == '\0')
		return (h);
	while (h[i] && i < len)
	{
		c = 0;
		while (h[i + c] == n[c] && n[c] && h[i + c] != '\0' && c < len - i)
		{	
			if (n[c + 1] == '\0')
				return (&h[i]);
			c++;
		}
	i++;
	}
	return (0);
}
/*int	main(void)
{
	char h[] = "pajajar";
	char n [] = "ajaj";
	printf("original %s\n",strnstr(h, n, 5));
	printf("replica %s\n", ft_strnstr(h, n, 5));
	return (0);
}*/
