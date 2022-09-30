/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:39:18 by smartin           #+#    #+#             */
/*   Updated: 2022/09/28 15:51:04 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	ft_memcpy(new, s1, ft_strlen(s1));
	ft_memcpy(&new[ft_strlen(s1)], s2, ft_strlen(s2));
	new[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (new);
}

/*int	main (void)
{
	char n[] = "hola";
	char m[] = "adeu";
	printf("%s\n", ft_strjoin(n,m));
}*/
