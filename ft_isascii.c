/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:33:04 by smartin           #+#    #+#             */
/*   Updated: 2022/09/26 11:33:22 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*int	main(void)
{
	printf("original %d\n", isascii(128));
	printf("replica %d\n", ft_isascii(128));
	return (0);
}*/
