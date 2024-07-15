/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:20:57 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/07 11:13:01 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (*range == 0)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}

// #include <stdio.h>

// int ft_ultimate_range(int **range, int min, int max);

// int	main(void)
// {
// 	int *range;

// 	printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
// 	printf("0, 1, 2, 3, 4 :
//  %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);

// 	printf("0:%d\n", ft_ultimate_range(&range, 3, 3));

// 	printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
// 	printf("-1, 0 : %d, %d", range[0], range[1]);
// }
