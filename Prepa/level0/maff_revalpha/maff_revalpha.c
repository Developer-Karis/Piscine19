#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_revalpha(void)
{
	char z;
	char y;

	z = 'z';
	y = 'Y';
	while (z >= 'b' && y >= 'A')
	{
		ft_putchar(z);
		ft_putchar(y);
		z-=2;
		y-=2;
	}
}

int		main(void)
{
	maff_revalpha();
	return (0);
}
