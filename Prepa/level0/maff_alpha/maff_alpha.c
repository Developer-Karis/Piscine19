#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_alpha(void)
{
	char a;
	char b;

	a = 'a';
	b = 'B';
	while (a <= 'y' && b <= 'Z')
	{
		ft_putchar(a);
		ft_putchar(b);
		a+=2;
		b+=2;
	}
}

int		main(void)
{
	maff_alpha();
	return (0);
}
