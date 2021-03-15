/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 15:11:07 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/15 18:56:42 by kpapadop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int sign = 0;
	int countNeg;
	int countPos;
	int result;

	i = 0;
	countNeg = 0;
	countPos = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			countNeg++;
			if (countNeg % 2 == 0)
				sign *= -1;
		if (str[i] == '+')
			countPos++;
		i++;
	}
	return (result * sign);
}
