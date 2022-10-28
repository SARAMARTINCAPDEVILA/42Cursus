/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:31:08 by smartin           #+#    #+#             */
/*   Updated: 2022/10/27 17:27:43 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printhex_pointers(unsigned long long hx, int count)
{
	static char	*base_low;

	base_low = "0123456789abcdef";
	if (hx > 15)
	{
		count = ft_printhex_pointers(hx / 16, count);
		if (count == -1)
			return (-1);
	}
	count = ft_printchar(base_low[hx % 16], count);
	if (count == -1)
		return (-1);
	return (count);
}

int	ft_printpoint(void *ptr, int count)
{
	count = ft_printstr("0x", count);
	if (count == -1)
		return (-1);
	count = ft_printhex_pointers((unsigned long long)ptr, count);
	if (count == -1)
		return (-1);
	return (count);
}
