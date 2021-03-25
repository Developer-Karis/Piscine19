#include <unistd.h>

int		repeat_alpha(char c)
{
	int repeat;

	if (c >= 'A' && c <= 'Z')
	{
		repeat = c - 'A' + 1;
	}
	else if (c >= 'a' && c <= 'z')
	{
		repeat = c - 'a' + 1;
	}
	else
	{
		repeat = 1;
	}
	return (repeat);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(*argv[1]);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
