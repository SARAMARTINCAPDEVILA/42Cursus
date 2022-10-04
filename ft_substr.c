/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:10:08 by smartin           #+#    #+#             */
/*   Updated: 2022/09/30 12:08:26 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			i;
	size_t			h;
	int				mal;

	i = 0;
	h = 0;
	if (start > ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
		return (ft_strdup(""));
	mal = len + 1;
	if (ft_strlen(s) - start + 1 == len)
		mal = len;
	else if (len > ft_strlen(s) - start + 1)
		mal = ft_strlen(s) - start + 1;
	sub = (char *)malloc(sizeof(char) * mal);
	if (!sub)
		return (NULL);
	while (s[i])
	{
		if (i >= start && h < len)
			sub[h++] = s[i];
		i++;
	}
	sub[h] = '\0';
	return (sub);
}
int	main(void)
{
	char q[] = "hola";
	printf("%s\n", ft_substr(q, 2, 3));
	return (0);
}
