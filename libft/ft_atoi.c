/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:28:37 by smartin           #+#    #+#             */
/*   Updated: 2022/09/27 14:04:19 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	neg;
	int	num;

	count = 0;
	neg = 1;
	num = 0;
	while (str[count] == 32 || (str[count] > 8 && str[count] < 14))
		count++;
	if ((str[count] == '+' || str[count] == '-'))
	{
		if (str[count] == '-')
			neg = -neg;
		count++;
	}
	while (str[count] >= 48 && str[count] <= 57)
	{
		num = num * 10 + str[count] - 48;
		count++;
	}
	return (num * neg);
}
/*int	main(void)
{
	char s [] = "hola";
	printf("original %d\n",atoi(s));
	printf("replica %d\n",ft_atoi(s));
	return (0);
}*/
