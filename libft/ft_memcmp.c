/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:41:02 by smartin           #+#    #+#             */
/*   Updated: 2022/09/27 13:53:29 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*st1;
	unsigned char	*st2;

	i = 0;
	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((st1[i] == st2[i]) && (i < n - 1))
		i++;
	return (st1[i] - st2[i]);
}
/*int	main(void)
{
	char a[] = "hola";
	char b[] = "holi";
	printf("original %d\n", memcmp(a, b, 4));
	printf("replica %d\n", ft_memcmp(a, b, 4));
	return (0);
}*/
