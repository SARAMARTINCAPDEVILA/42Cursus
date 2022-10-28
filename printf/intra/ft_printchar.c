/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:19:25 by smartin           #+#    #+#             */
/*   Updated: 2022/10/28 11:07:53 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(const char c, int count)
{
	if (write (1, &c, 1) < 0)
		return (-1);
	else
		count ++;
	return (count);
}
