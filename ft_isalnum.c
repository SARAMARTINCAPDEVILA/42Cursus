/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:48:17 by smartin           #+#    #+#             */
/*   Updated: 2022/09/26 11:26:37 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <ctype.h>

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*int	main (void)
{
	printf("original %d\n", isalnum('!'));
	printf("replica %d\n", ft_isalnum('!'));
	return (0);
}*/
