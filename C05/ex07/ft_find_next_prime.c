/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 17:10:25 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/22 17:58:31 by kpapadop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	unsigned int i;
	int	not_found;

	if (nb < 2)
		nb = 2;
	i = (unsigned int)nb;
	not_found = 1;
	while (not_found)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}

int		main(void)
{
	printf("%d", ft_find_next_prime(-2147483643));
	return (0);
}
