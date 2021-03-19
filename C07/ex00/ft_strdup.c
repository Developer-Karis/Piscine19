/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 16:22:53 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/19 16:44:13 by kpapadop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	int malloc;

	i = 0;
	malloc = malloc(0, sizeof(int));
	while (str[i] != '\0')
	{

		i++;
	}
	free(malloc);
	return (str);
}

int		main(void)
{
	char test[] = "helloAtous";
	
	printf("%s", strdup(test), ft_strdup(test));
	return (0);
}
