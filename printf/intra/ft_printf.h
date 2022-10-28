/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:50:45 by smartin           #+#    #+#             */
/*   Updated: 2022/10/28 11:07:16 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int				ft_printf(char const *format, ...);
int				ft_printchar(const char c, int cont);
int				ft_printstr(const char *str, int cont);
int				ft_printdigit(int d, int count);
int				ft_printhex(unsigned int hex, int count, int mode);
int				ft_printpoint(void *ptr, int count);
unsigned int	ft_printuns(unsigned int d, int count);
#endif
