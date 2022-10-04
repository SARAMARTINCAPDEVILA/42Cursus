/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:11:44 by smartin           #+#    #+#             */
/*   Updated: 2022/09/27 13:23:44 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*a;

	i = 0;
	a = (char *)s;
	while (s[i])
	{
		if ((s[i]) == (unsigned char)c)
			return (&a[i]);
	i++;
	}
	if ((unsigned char) c == '\0')
		return (&a[i]);
	else
		return (NULL);
}
/*int	main (void)
{
	char *str = "caracola";
	int c = 'a';
	printf("original %s\n", strchr(str,c));
	printf("replica  %s\n", ft_strchr(str,c));
	return(0);
}*/
