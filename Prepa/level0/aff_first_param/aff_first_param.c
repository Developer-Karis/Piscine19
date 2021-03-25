#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	aff_first_param(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		aff_first_param(argv[1]);
	}
	else
	{
		ft_putchar('\n');
	}	
	return (0);
}
