/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:30:34 by smartin           #+#    #+#             */
/*   Updated: 2022/10/07 18:28:13 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int			count;
	long int	cast;

	count = 0;
	cast = (long int)n;
	if (n == 0)
		return (1);
	if (cast < 0)
	{
		count = 1;
		cast = -cast;
	}
	while (cast > 0)
	{
		count++;
		cast = cast / 10;
	}
	return (count);
}

static char	*ft_fillstr(char *str, int n)
{
	long int	cast;
	int			i;

	cast = (long int)n;
	if (n == 0)
		str[0] = '0';
	if (cast < 0)
	{
		str[0] = '-';
		cast = -cast;
	}
	i = ft_intlen(n) - 1;
	while (cast > 0)
	{
		str[i] = (cast % 10) + '0';
		i--;
		cast = cast / 10;
	}
	str[ft_intlen(n)] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (!str)
		return (NULL);
	return (ft_fillstr(str, n));
}

/*int	main (void)
{
int	c  = -3555;
printf("%s\n", ft_itoa(c));
return (0);
}*/
