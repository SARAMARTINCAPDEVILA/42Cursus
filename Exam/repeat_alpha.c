#include <unistd.h>

int	main (int argc, char ** argv)
{
	int alpha;
	int repeat;

if (argc == 2)
{	alpha = 0;
	while (argv[1][alpha])
	{repeat = 1;
	if (argv[1][alpha] >= 'a' && argv[1][alpha] <= 'z')
		repeat += argv[1][alpha] - 'a';
	else if (argv[1][alpha] >= 'A' && argv[1][alpha] <= 'Z')
		repeat += argv[1][alpha] - 'A';
	while (repeat)
	{
	write (1, &argv[1][alpha], 1);
	repeat --;
	}
	alpha++;
	}
}
	write (1, "\n", 1);
	return (0);
}
