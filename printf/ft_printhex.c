/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:32:24 by smartin           #+#    #+#             */
/*   Updated: 2022/10/27 17:25:24 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int hx, int count, int mode)
{
	static char	*base_low;
	static char	*base_upper;

	base_low = "0123456789abcdef";
	base_upper = "0123456789ABCDEF";
	if (hx > 15)
	{
		count = ft_printhex(hx / 16, count, mode);
		if (count == -1)
			return (-1);
	}
	if (mode == 1)
	{
		count = ft_printchar(base_low[hx % 16], count);
		if (count == -1)
			return (-1);
	}				
	else
	{
		count = ft_printchar(base_upper[hx % 16], count);
		if (count == -1)
			return (-1);
	}
	return (count);
}
