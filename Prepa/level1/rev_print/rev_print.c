#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		main(int ac, char **av)
{
	int len;
	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		while (len--)
			ft_putchar(av[1][len]);
	}
	write(1, "\n", 1);
	return (0);
}
