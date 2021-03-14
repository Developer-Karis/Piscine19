/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 19:01:31 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/14 15:58:59 by kpapadop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);
void ft_putstr(char *str);
void ft_putnbr(int nb);
int	ft_atoi(char *str);

int		main(void)
{
	char str1[] = "hello";
	char str2[] = "coucou";
	char str3[] = "";
	char str4[] = "a";

	printf("\033[0;36m        ____________________\n\n*             C04 Karis        *\n        _____________________\033[0m");
	printf("\n\n\033[0;35mEX00\033[0m | own => %d\n\n", ft_strlen(str1));
	printf("\033[0;35mEX00\033[0m | own => %d\n\n", ft_strlen(str2));
	printf("\033[0;35mEX00\033[0m | own => %d\n\n", ft_strlen(str3));
	printf("\033[0;35mEX00\033[0m | own => %d\n\n", ft_strlen(str4));
	printf("\033[0;33m______-----____------______-------______\033[0m\n");
	
	char str5[] = "hello";
	char str6[] = "coucou";
	char str7[] = "";
	char str8[] = "aloiuyhyh";

	printf("\033[0;35mEX01\033[0m");
	printf("\n");
	ft_putstr(str5);
	printf("\n");
	ft_putstr(str6);
	printf("\n");
	ft_putstr(str7);
	ft_putstr(str8);
	printf("\n\033[0;33m______-----____------______-------______\033[0m\n");

	int nb1 = 0;
	int nb2 = 420;
	int nb3 = -20;
	int nb4 = -2147483648;
	int nb5 = 2147483647;

	printf("\033[0;35mEX02\033");
	printf("\n");
	ft_putnbr(nb1);
	printf("\n");
	ft_putnbr(nb2);
	printf("\n");
	ft_putnbr(nb3);
	printf("\n");
	ft_putnbr(nb4);
	printf("\n");
	ft_putnbr(nb5);
	printf("\n\033[0;33m______-----____------______-------______\033[0m\n");

	char atoi[] = "   ---+--+1234ab567";

	printf("\033[0;35mEX03\033");
	printf("\n");
	ft_atoi(atoi);
	printf("\n\033[0;33m______-----____------______-------______\033[0m\n");
}
