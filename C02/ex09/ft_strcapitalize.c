/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:12:49 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/10 19:26:42 by kpapadop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	manage_characters(char *str, int i)
{
	if (str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		else if (str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+')
			if ()
				str
			manage_characters(str, str[i]);
		i++;
	}
	return (str);
}

int		main(void)
{
	char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(test));
	return (0);
}
