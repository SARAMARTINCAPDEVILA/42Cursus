/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smartin <smartin@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:30:34 by smartin           #+#    #+#             */
/*   Updated: 2022/09/30 15:30:36 by smartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_itoa(int n)
char	*str;

/* We do a size of 2 in our malloc function because we want to do one character at a time from the given int n, one space for the one digit number 
converted to a char and the terminating '\0' that is needed to finish that individual char's string. If the allocation fails we return NULL. 
We also want to compensate for the chance the int passed to us is the smallest integer possible. If we are passed that number into our parameter 
we make sure we return a string of it.*\
   
	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
/* Then set str equal to ft_strjoin with our str as a parameter and we recursively call our function with a -n so asto turn the negative int into a postive. *\
    
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

