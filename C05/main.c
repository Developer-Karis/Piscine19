/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:28:39 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/17 20:28:33 by kpapadop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);

int		main(void)
{
	int nb0 = -2;
	int nb1 = 0;
	int nb2 = 5;
	int nb3 = 1;
	int nb4 = 7;
	int nb5 = 3;

	printf("\033[0;36m        ____________________\n\n*             C05 Karis        *\n        _____________________\033[0m");
	printf("\n\n\033[0;35mEX00\033[0m | result => !-2 = %d\n", ft_iterative_factorial(nb0));
	printf("\n\n\033[0;35mEX00\033[0m | result => !0 = %d\n", ft_iterative_factorial(nb1));
	printf("\n\n\033[0;35mEX00\033[0m | result => !5 = %d\n", ft_iterative_factorial(nb2));
	printf("\n\n\033[0;35mEX00\033[0m | result => !1 = %d\n", ft_iterative_factorial(nb3));
	printf("\n\n\033[0;35mEX00\033[0m | result => !7 = %d\n", ft_iterative_factorial(nb4));
	printf("\n\n\033[0;35mEX00\033[0m | result => !3 = %d\n", ft_iterative_factorial(nb5));
printf("\n\033[0;33m______-----____------______-------______\033[0m\n");

	printf("\n\n\033[0;35mEX01\033[0m | result => !-2 = %d\n", ft_recursive_factorial(nb0));
	printf("\n\n\033[0;35mEX01\033[0m | result => !0 = %d\n", ft_recursive_factorial(nb1));
	printf("\n\n\033[0;35mEX01\033[0m | result => !5 = %d\n", ft_recursive_factorial(nb2));
	printf("\n\n\033[0;35mEX01\033[0m | result => !1 = %d\n", ft_recursive_factorial(nb3));
	printf("\n\n\033[0;35mEX01\033[0m | result => !7 = %d\n", ft_recursive_factorial(nb4));
	printf("\n\n\033[0;35mEX01\033[0m | result => !3 = %d\n", ft_recursive_factorial(nb5));
printf("\n\033[0;33m______-----____------______-------______\033[0m\n\n");

	printf("\n\n\033[0;35mEX02\033[0m | result => 2371^-4072 = %d\n", ft_iterative_power(2371, -4072));
	printf("\n\n\033[0;35mEX02\033[0m | result => 0^0 = %d\n", ft_iterative_power(0, 0));
	printf("\n\n\033[0;35mEX02\033[0m | result => -802^0 = %d\n", ft_iterative_power(-802, 0));
	printf("\n\n\033[0;35mEX02\033[0m | result => -335^1 = %d\n", ft_iterative_power(-335, 1));
	printf("\n\n\033[0;35mEX02\033[0m | result => 1^2 = %d\n", ft_iterative_power(1, 2));
	printf("\n\n\033[0;35mEX02\033[0m | result => -1^3 = %d\n", ft_iterative_power(-1, 3));
	printf("\n\n\033[0;35mEX02\033[0m | result => -8^4 = %d\n", ft_iterative_power(-8, 4));
	printf("\n\n\033[0;35mEX02\033[0m | result => -6^5 = %d\n", ft_iterative_power(-6, 5));
	printf("\n\n\033[0;35mEX02\033[0m | result => -4^6 = %d\n", ft_iterative_power(-4, 6));
	printf("\n\n\033[0;35mEX02\033[0m | result => -3^7 = %d\n", ft_iterative_power(-3, 7));
	printf("\n\n\033[0;35mEX02\033[0m | result => -2^9 = %d\n", ft_iterative_power(-2, 9));

printf("\n\033[0;33m______-----____------______-------______\033[0m\n\n");
	printf("\n\n\033[0;35mEX03\033[0m | result => 2371^-4072 = %d\n", ft_recursive_power(2371, -4072));
	printf("\n\n\033[0;35mEX03\033[0m | result => 0^0 = %d\n", ft_recursive_power(0, 0));
	printf("\n\n\033[0;35mEX03\033[0m | result => -802^0 = %d\n", ft_recursive_power(-802, 0));
	printf("\n\n\033[0;35mEX03\033[0m | result => -335^1 = %d\n", ft_recursive_power(-335, 1));
	printf("\n\n\033[0;35mEX03\033[0m | result => 1^2 = %d\n", ft_recursive_power(1, 2));
	printf("\n\n\033[0;35mEX03\033[0m | result => -1^3 = %d\n", ft_recursive_power(-1, 3));
	printf("\n\n\033[0;35mEX03\033[0m | result => -8^4 = %d\n", ft_recursive_power(-8, 4));
	printf("\n\n\033[0;35mEX03\033[0m | result => -6^5 = %d\n", ft_recursive_power(-6, 5));
	printf("\n\n\033[0;35mEX03\033[0m | result => -4^6 = %d\n", ft_recursive_power(-4, 6));
	printf("\n\n\033[0;35mEX03\033[0m | result => -3^7 = %d\n", ft_recursive_power(-3, 7));
	printf("\n\n\033[0;35mEX03\033[0m | result => -2^9 = %d\n", ft_recursive_power(-2, 9));
printf("\n\033[0;33m______-----____------______-------______\033[0m\n\n");

	printf("\033[0;35mEX04\033[0m | result => -1656 = %d\n", ft_fibonacci(-1656));
	printf("\n\n\033[0;35mEX04\033[0m | result => 0 = %d\n", ft_fibonacci(0));
	printf("\n\n\033[0;35mEX04\033[0m | result => 1 = %d\n", ft_fibonacci(1));
	printf("\n\n\033[0;35mEX04\033[0m | result => 2 = %d\n", ft_fibonacci(2));
	printf("\n\n\033[0;35mEX04\033[0m | result => 3 = %d\n", ft_fibonacci(3));
	printf("\n\n\033[0;35mEX04\033[0m | result => 11 = %d\n", ft_fibonacci(11));
	printf("\n\n\033[0;35mEX04\033[0m | result => 16 = %d\n", ft_fibonacci(16));
printf("\n\033[0;33m______-----____------______-------______\033[0m\n\n");

	printf("\033[0;35mEX05\033[0m | original => %f / own => %d\n", sqrt(-2), ft_sqrt(-2));
	printf("\n\n\033[0;35mEX05\033[0m | original => %f / own => %d\n", sqrt(1), ft_sqrt(1));
	printf("\n\n\033[0;35mEX05\033[0m | original => %f / own => %d\n", sqrt(4), ft_sqrt(4));
	printf("\n\n\033[0;35mEX05\033[0m | original => %f / own => %d\n", sqrt(9), ft_sqrt(9));
	printf("\n\n\033[0;35mEX05\033[0m | original => %f / own => %d\n", sqrt(15), ft_sqrt(15));
printf("\n\033[0;33m______-----____------______-------______\033[0m\n\n");

	printf("\n\n\033[0;35mEX06\033[0m | result => 0 / own => %d\n", ft_is_prime(0));
	printf("\n\n\033[0;35mEX06\033[0m | result => 1 / own => %d\n", ft_is_prime(1));
	printf("\n\n\033[0;35mEX06\033[0m | result => 2 / own => %d\n", ft_is_prime(2));
	printf("\n\n\033[0;35mEX06\033[0m | result => 3 / own => %d\n", ft_is_prime(3));
	printf("\n\n\033[0;35mEX06\033[0m | result => 4 / own => %d\n", ft_is_prime(4));
	printf("\n\n\033[0;35mEX06\033[0m | result => 5 / own => %d\n", ft_is_prime(5));
printf("\n\033[0;33m______-----____------______-------______\033[0m\n");
	return (0);
}
