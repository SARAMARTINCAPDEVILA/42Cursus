/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:41:06 by smartin           #+#    #+#             */
/*   Updated: 2022/10/27 17:26:42 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_printuns(unsigned int d, int count)
{
	if (d > 9)
	{
		count = ft_printuns(d / 10, count);
		if (count == -1)
			return (-1);
	}
	count = ft_printchar(d % 10 + '0', count);
	if (count == -1)
		return (-1);
	return (count);
}
