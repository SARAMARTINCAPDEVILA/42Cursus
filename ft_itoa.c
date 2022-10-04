/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:30:34 by smartin           #+#    #+#             */
/*   Updated: 2022/10/04 17:43:17 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Guardamos con malloc un sizeof*2 porque en un espacio 
guardaremos caracteres (onebyone) y en el otro el \0'.
Si falla la reserva de memoria, el malloc queda protegido 
con return(null) Tenemos en cuenta los extremos, es decir 
el menor integer posible.Ojo conversion de negativos, hay 
que senialar el distintivo - y convertir el valor absoluto.
str nos tiene que devolver caracter a caracter un string numerico,
por lo que igualamos str a la funcion que concatena sin sobrescribir 
(strjoin) y a esta le pasasmos como parametro la recursiva en division 
y modulo.Si el numero fuera simple 0-9 lo convertimos mediante suma 
de char '0'.
*/
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	if (!(str))
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 10)
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}
