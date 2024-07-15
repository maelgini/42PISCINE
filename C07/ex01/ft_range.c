/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:21:55 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/07 11:10:56 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return (0);
	tab = (int *)malloc((max - min) * sizeof(int));
	if (tab == 0)
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
// #include <stdio.h>

// int *ft_range(int min, int max);

// int	main(void)
// {
// int *range;

// printf
// ("Warn:Any segfault will mean that arrays are not correctly allocated\n");

// range = ft_range(0, 5);
// printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n",
// range[0], range[1], range[2], range[3], range[4]);

// range = ft_range(3, 3);

// range = ft_range(-1, 1);
// printf("-1, 0 : %d, %d", range[0], range[1]);
// }
