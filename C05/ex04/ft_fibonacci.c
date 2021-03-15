/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:20:09 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/15 15:49:00 by kpapadop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonnaci(int index)
{
	if (index >= 3)
		return (ft_fibonnaci(index - 1) + ft_fibonnaci(index - 2));
	else if (index < 0)
		return (-1);
	else
		return (1);
}
