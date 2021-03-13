/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 19:01:31 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/13 19:45:40 by kpapadop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);
void ft_putstr(char *str);

int		main(void)
{
	char str1[] = "hello";
	char str2[] = "coucou";
	char str3[] = "";
	char str4[] = "a";

	printf("\033[0;36m        ____________________\n\n*             C04 Karis        *\n        _____________________\033[0m");
	printf("\n\n\033[0;35mEX00\033[0m | original => %lu / own => %d\n\n", strlen(str1), ft_strlen(str1));
	printf("\033[0;35mEX00\033[0m | original => %lu / own => %d\n\n", strlen(str2), ft_strlen(str2));
	printf("\033[0;35mEX00\033[0m | original => %lu / own => %d\n\n", strlen(str3), ft_strlen(str3));
	printf("\033[0;35mEX00\033[0m | original => %lu / own => %d\n\n", strlen(str4), ft_strlen(str4));

	char str5[] = "hello";
	char str6[] = "coucou";
	char str7[] = "";
	char str8[] = "aloiuyhyh";

	printf("\n\n\033[0;35mEX01\033[0m | original => %lu / own => %s\n\n", strlen(str5), ft_putstr(str5));
	printf("\033[0;35mEX01\033[0m | original => %lu / own => %s\n\n", strlen(str6), ft_putstr(str6));
	printf("\033[0;35mEX01\033[0m | original => %lu / own => %s\n\n", strlen(str7), ft_putstr(str7));
	printf("\033[0;35mEX01\033[0m | original => %lu / own => %s\n\n", strlen(str8), ft_putstr(str8));
}
