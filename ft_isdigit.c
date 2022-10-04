/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:32:41 by smartin           #+#    #+#             */
/*   Updated: 2022/09/26 11:18:38 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <ctype.h>
int	ft_isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}
/*int	main(void)
{
	printf("original %d\n", isdigit(9));
	printf("replica %d\n", ft_isdigit(9));
	return (0);
}
*/
