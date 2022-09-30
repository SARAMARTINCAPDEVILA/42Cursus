/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:48:00 by smartin           #+#    #+#             */
/*   Updated: 2022/09/27 13:48:45 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while ((unsigned int)i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (NULL);
	else
		return (NULL);
}
/*int	main(void)
{
	char s[] = "scuba";
	int c = 'b';
	printf("original %s\n",memchr(s,c, 4));
	printf("repplica %s\n",ft_memchr(s,c,4));
	return (0);
}*/
