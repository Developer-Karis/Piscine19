/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vneirinc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 09:53:05 by vneirinc          #+#    #+#             */
/*   Updated: 2021/03/06 12:53:06 by vneirinc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top_bottom(int x, char first_corner)
{
	ft_putchar(first_corner);
	while (--x > 1)
	{
		ft_putchar('*');
	}
	if (x > 0)
		ft_putchar(139 - first_corner);
	ft_putchar('\n');
}

void	middle(int x)
{
	ft_putchar('*');
	while (--x > 1)
		ft_putchar(' ');
	if (x > 0)
		ft_putchar('*');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		top_bottom(x, '/');
		while (--y > 1)
			middle(x);
		if (y > 0)
			top_bottom(x, '\\');
	}
}
