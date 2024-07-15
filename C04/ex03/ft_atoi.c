/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 12:04:24 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/01 17:14:01 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	n;
	int	sign;

	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		sign *= -1;
		str++;
	}
	n = 0;
	while (*str >= '0' && *str <= '9')
	{
			n = n * 10 + *str - '0';
			str++;
	}
	return (n * sign);
}
/*
int main(int ac, char **av)
{
	if (ac == 2)
	printf("%d", ft_atoi(av[1]));
}
*/