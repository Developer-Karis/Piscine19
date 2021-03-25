#include <unistd.h>

void str_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	write(1, &str[i], 1);
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' ||
			str[i + 1] == '\t' || str[i + 1] == '\0'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int main(int ac, char *av[])
{
	int i;

	if (ac > 1)
	{
		i = 0;
		while (i < ac)
		{
			str_capitalizer(av[i]);
			write (1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}