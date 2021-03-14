/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:28:39 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/14 17:37:36 by kpapadop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int		main(void)
{
	int nb1 = 0;
	int nb2 = 5;
	int nb3 = 1;
	int nb4 = 7;
	int nb5 = 3;

	printf("\033[0;36m        ____________________\n\n*             C05 Karis        *\n        _____________________\033[0m");
	printf("\n\n\033[0;35mEX00\033[0m | result => !0 = %d\n", ft_iterative_factorial(nb1));
	printf("\n\n\033[0;35mEX00\033[0m | result => !5 = %d\n", ft_iterative_factorial(nb2));
	printf("\n\n\033[0;35mEX00\033[0m | result => !1 = %d\n", ft_iterative_factorial(nb3));
	printf("\n\n\033[0;35mEX00\033[0m | result => !12 = %d\n", ft_iterative_factorial(nb4));
	printf("\n\n\033[0;35mEX00\033[0m | result => !3 = %d\n", ft_iterative_factorial(nb5));
printf("\n\033[0;33m______-----____------______-------______\033[0m\n\n");
	return (0);
}
