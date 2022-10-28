/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:52:49 by smartin           #+#    #+#             */
/*   Updated: 2022/10/27 17:21:37 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_type(const char c, va_list args, int count)
{
	if (c == '%')
		count = ft_printchar('%', count);
	if (c == 'c')
		count = ft_printchar(va_arg(args, int), count);
	else if (c == 's')
		count = ft_printstr(va_arg(args, char *), count);
	else if (c == 'd' || c == 'i')
		count = ft_printdigit(va_arg(args, int), count);
	else if (c == 'x')
		count = ft_printhex(va_arg(args, unsigned int), count, 1);
	else if (c == 'X')
		count = ft_printhex(va_arg(args, unsigned int), count, 2);
	else if (c == 'p')
		count = ft_printpoint(va_arg(args, void *), count);
	else if (c == 'u')
		count = ft_printuns(va_arg(args, unsigned int), count);
	return (count);
}

int	ft_printf(const char *format, ...)
{	
	va_list	args;
	int		content;
	int		i;

	content = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			content = ft_type((char)format[++i], args, content);
			if (content == -1)
				return (-1);
		}
		else
		{	
			content = ft_printchar(format[i], content);
			if (content == -1)
				return (-1);
		}
		i++;
	}
	va_end(args);
	return (content);
}
