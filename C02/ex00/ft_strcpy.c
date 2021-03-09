/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 11:28:32 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/08 16:17:02 by kpapadop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_strcpy(char *dest, char *src)
{
	strcpy(*dest, *src);
}

int		main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";

	*ft_strcpy(str1, str2);
	printf("%c\t", str1);
	printf("%c\t", str2);
	return (0);
}
