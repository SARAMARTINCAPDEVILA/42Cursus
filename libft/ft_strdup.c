/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:30:09 by smartin           #+#    #+#             */
/*   Updated: 2022/09/27 14:13:01 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char *)malloc(ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	ft_memcpy (str, s1, ft_strlen(s1));
	str[ft_strlen(s1)] = '\0';
	return (str);
}
/*int	main (void)
{
	char s[] = "allocat";
	printf("original %s\n", strdup(s));
	printf("replica %s\n", ft_strdup(s));
	return (0);
}*/
