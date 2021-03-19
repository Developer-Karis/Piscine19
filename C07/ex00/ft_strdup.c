/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karis <karis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 16:22:53 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/19 20:59:24 by karis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char 	*ft_strdup(char *src)
{
	int i;
	int len;
	char *new;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	new = (char*)malloc(sizeof(*new) * (len + 1)); 
	while (i < len)
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int 	main(void)
{
	char test[] = "helloAtous";
	
	printf("%s\n", strdup(test));
	printf("%s\n", ft_strdup(test));
	return (0);
}
