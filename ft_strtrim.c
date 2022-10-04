/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:51:30 by smartin           #+#    #+#             */
/*   Updated: 2022/09/28 19:02:07 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)

{
	char	*new;
	int		a;
	int		z;

	a = 0;
	z = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[a] && ft_strchr(set, s1[a]))
		a++;
	while (z > 0 && ft_strrchr(set, s1[z]))
		z--;
	new = ft_substr((char *)s1, a, z - (a - 1));
	return (new);
}
