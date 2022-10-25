#include <stdio.h>

void	swap (int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main (void)
{
	int *a = 0;
	int *b = '1';
	printf("change %s", swap(a, b));
return (0);
}
