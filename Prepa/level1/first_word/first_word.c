#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1] && (*argv[1] == ' ' || *argv[1] == '\t'))
			++argv[1];
		while (*argv[1] != '\0' && (*argv[1] != ' ' && *argv[1] != '\t'))
			ft_putchar(*argv[1]++);
	}
	ft_putchar('\n');
	return (0);
}
