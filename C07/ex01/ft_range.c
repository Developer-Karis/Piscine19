/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karis <karis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 20:56:22 by karis             #+#    #+#             */
/*   Updated: 2021/03/20 00:31:41 by karis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int min, int max)
{
    int i;
    int *tab;

    if (min >= max)
        return (NULL);
    tab = (int*)malloc(sizeof(*tab) * (max - min));
    i = 0;
    while (min < max)
    {
        tab[i] = min;
        i++;
        min++;
    }
    return (tab);
}

int     main(void)
{
    int *res;
    int i;
    int min = 5;
    int max = 10;

    res = ft_range(min, max);
    
    i = 0;
    while (i < 5)
    {
        printf("%d\t", res[i]);
        i++;
    }
    return (0);
}