/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:57:41 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/02 15:08:59 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	res;

	res = 0;
	if (nb < 0)
		return (0);
	while ((res * res) < nb)
	{
		res++;
	}
	if ((res * res) == nb)
		return (res);
	return (0);
}
// #include <stdio.h>

// int ft_sqrt(int nb);

// int	main(void)
// {
// 	printf("10:%d\n", ft_sqrt(2147483647));
// 	// printf("10:%d\n", ft_sqrt(100));
// 	// printf("6:%d\n", ft_sqrt(36));
// 	// printf("0:%d\n", ft_sqrt(37));
// 	// printf("100:%d\n", ft_sqrt(10000));
// 	// printf("0:%d\n", ft_sqrt(10001));
// 	// printf("2000:%d\n", ft_sqrt(4000000));
// 	// printf("0:%d\n", ft_sqrt(-36));
// }
