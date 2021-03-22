/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 11:47:07 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/22 16:46:22 by kpapadop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char				*ft_strcpy(char *src, int size)
{
	char	*result;
	int		i;

	result = NULL;
	result = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			i;

	result = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strcpy(av[i], result[i].size);
		i++;
	}
	result[i].size = 0;
	result[i].str = 0;
	result[i].copy = 0;
	return (result);
}

int		main(void)
{
	int		i;
	char	*tab[3];

	tab[0] = "yes";
	tab[1] = "yessaie";
	tab[2] = "oh non non mec";

	t_stock_str *test = ft_strs_to_tab(3, tab);

	i = 0;
	while (test[i].str)
	{
		printf("%d, %s, %s\n", test[i].size, test[i].str, test[i].copy);
		i++;
	}
	return (0);
}
