/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:42:50 by smartin           #+#    #+#             */
/*   Updated: 2022/09/26 11:47:46 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <ctype.h>
int	ft_isprint(int c)
{
	return ((c >= 32) && (c <= 126));
}
/*int	main(void)
{
	printf("original %d\n", isprint(33));
	printf("replica %d\n", ft_isprint(33));
	return (0);
}*/
