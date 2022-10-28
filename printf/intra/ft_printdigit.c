/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:41:06 by smartin           #+#    #+#             */
/*   Updated: 2022/10/28 11:24:35 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printdigit_recursive(int d, int count)
{
	if (d > 9)
	{
		count = ft_printdigit(d / 10, count);
		if (count == -1)
			return (-1);
	}
	count = ft_printchar(d % 10 + '0', count);
	if (count == 1)
		return (-1);
	return (count);
}

int	ft_printdigit(int d, int count)
{
	if (d == -2147483648)
	{
		count = ft_printstr("-2147483648", count);
		if (count == -1)
			return (-1);
		return (count);
	}
	if (d < 0)
	{
		count = ft_printchar('-', count);
		if (count == -1)
			return (-1);
		d = -d;
	}
	count = ft_printdigit_recursive(d, count);
	if (count == -1)
		return (-1);
	return (count);
}

/*int	main (void)
{
	int count = 0;
	count = ft_printdigit(1324, count);
	printf("count vale: %i\n", count);
	return (0);
}*/
