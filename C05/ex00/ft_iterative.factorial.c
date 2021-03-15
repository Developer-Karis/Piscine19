/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative.factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 16:53:58 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/15 11:42:22 by kpapadop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	result = 1;
	i = 1;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
