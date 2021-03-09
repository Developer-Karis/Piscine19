/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 12:07:11 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/09 16:39:30 by kpapadop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nbr;
	int i;
	int verif;

	verif = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nbr = -nb;
	}
	else 
	{
		nbr = nb;
	}

	i = nbr;
	while (verif)
	{
		if (i < 9)
			verif = 0;
		ft_putchar(i % 10 + 48);
		i = nbr / 10;
		printf("%d", i);
	}
}

int		main(void)
{
	ft_putnbr(214748);
	return (0);
}
