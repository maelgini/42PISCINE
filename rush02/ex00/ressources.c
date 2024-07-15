/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ressources.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivallee <wivallee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:14:38 by raserre-          #+#    #+#             */
/*   Updated: 2024/07/14 21:42:57 by wivallee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

unsigned int	ft_strlen_num(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] <= '9' && str[i] >= '0')
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	ft_only_space(char *str)
{
	while (*str)
	{
		if (*str != ' ')
			return (0);
		str++;
	}
	if (!*str)
		return (0);
	return (1);
}

void	ft_print_nb(char *str)
{
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		str++;
	while (*str == ' ')
		str++;
	str++;
	while (*str == ' ')
		str++;
	while (*str && !ft_only_space(str + 1))
	{
		write(1, str, 1);
		str++;
	}
}
