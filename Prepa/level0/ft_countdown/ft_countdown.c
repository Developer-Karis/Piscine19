#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_countdown(void)
{
	int nb;

	nb = '9';
	while (nb >= '0')
	{
		ft_putchar(nb);
		nb--;
	}
}

int		main(void)
{
	ft_countdown();
	return (0);
}
