/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:27:27 by smartin           #+#    #+#             */
/*   Updated: 2022/09/27 12:50:20 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <ctype.h>
int	ft_tolower(int c)
{
	if (c >= 'A' && (c <= 'Z'))
		return (c + 32);
	else
		return (c);
}
/*int	main(void)
{
	char s = 'S';
	printf("originl %d\n", tolower(s));
	printf("replica %d\n", ft_tolower(s));
	return (0);
}*/
