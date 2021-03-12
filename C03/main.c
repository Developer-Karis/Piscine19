/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 20:05:49 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/12 17:47:49 by kpapadop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int		main(void)
{
	printf("-- Ex00 --\n");

	char str1[] = "hello";
	char str2[] = "world";
	printf("%i\n", strcmp(str1, str2));
	printf("%i\n", ft_strcmp(str1, str2));
	return (0);
}
