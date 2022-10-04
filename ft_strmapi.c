/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:14:31 by smartin           #+#    #+#             */
/*   Updated: 2022/10/04 12:11:05 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*stf;

	i = 0;
	stf = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (stf == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		stf[i] = f(i, s[i]);
		i++;
	}
	stf[i] = '\0';
	return (stf);
}
