/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:31:47 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/15 15:50:41 by kpapadop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	float result;

	i = 0;
	result = nb;
	while (i < nb)
	{
		result = (result + nb / result) / 2;
		i++;
	}
	if (nb < 0)
		return (0);
	return (result);
}
