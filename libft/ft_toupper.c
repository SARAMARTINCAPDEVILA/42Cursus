/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:51:51 by smartin           #+#    #+#             */
/*   Updated: 2022/09/27 12:49:13 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <ctype.h>
int	ft_toupper(int c)
{
	if (c >= 'a' && (c <= 'z'))
		return (c - 32);
	else
		return (c);
}
/*int	main (void)
{
	char s = 's';
	printf("original %d\n",toupper(s));
	printf("replica %d\n", ft_toupper(s));
	return (0);
}*/
