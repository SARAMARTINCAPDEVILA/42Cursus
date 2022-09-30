/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:33:41 by smartin           #+#    #+#             */
/*   Updated: 2022/09/27 13:33:58 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*a;

	i = ft_strlen(s);
	a = (char *)s;
	if (s == NULL)
		return (NULL);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (&a[i]);
		i--;
	}
	return (NULL);
}
/*int	main(void)
{
	char s[] = "hola";
	int	c = 'l';
	printf("original %s\n", strrchr(s, c));
	printf("replica %s\n", ft_strrchr(s, c));
	return (0);
}*/
