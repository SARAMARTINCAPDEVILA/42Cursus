/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:50:27 by smartin           #+#    #+#             */
/*   Updated: 2022/09/27 13:15:35 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//#include <strings.h>
void	ft_bzero(void *s, size_t n)
{
	s = ft_memset (s, 0, n);
}

/*int	main (void)
{
	char s[] = "zeros";
	printf("original %s\n",bzero(s, 2));
	printf("replica %s\n",ft_bzero(s, 2));
	return (0);
}*/
