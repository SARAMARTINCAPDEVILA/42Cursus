/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:26:10 by smartin           #+#    #+#             */
/*   Updated: 2022/09/26 11:09:02 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*int main (void)
{
	char *s1 = "aloha";
	char *s2 = "hola";
	printf("original %d\n", strncmp(s1, s2, 4));
	printf("replica %d\n", ft_strncmp(s1, s2, 4));
	return (0);
}
*/
