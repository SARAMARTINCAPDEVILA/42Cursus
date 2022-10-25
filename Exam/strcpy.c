#include <stdio.h>
char ft_strcpy (char *dst, char *src)
{
	int i;
	i = 0;
	while (src[i++])
		dst[i] = src[i];
	dst[i] = '\0';
	return (*dst);
}

int main (void)
{
	char *src = "cpy";
	char *dst = "pst";
	printf("a ver que pasa %c",ft_strcpy(dst, src));
return (0);
}
