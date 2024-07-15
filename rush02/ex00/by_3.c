/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   by_3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivallee <wivallee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:05:44 by raserre-          #+#    #+#             */
/*   Updated: 2024/07/14 20:55:22 by wivallee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_search_num(t_stock stock, unsigned int s_cmp, unsigned int s_size)
{
	int	i;
	int	j;

	i = 0;
	while (stock.strs[i])
	{
		j = 0;
		while (stock.strs[i][j] == ' ' || (stock.strs[i][j] >= '\t' \
			&& stock.strs[i][j] <= '\r'))
			j++;
		if (stock.strs[i][j] == '+')
			j++;
		if (ft_strncmp(stock.input, &stock.strs[i][j], s_cmp) == 0 \
		&& ft_strlen_num(&stock.strs[i][j]) == s_size)
		{
			if (stock.prt)
				ft_print_nb(stock.strs[i]);
			return (1);
		}
		i++;
	}
	write(1, "Dict Error\n", 11);
	return (-1);
}

unsigned int	count_zero(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
			str++;
	if (*str == '+')
		str++;
	if (*str == '1')
		str++;
	else
		return (0);
	while (*str == '0')
	{
		str++;
		i++;
	}
	return (i);
}

int	ft_search_teeeeen(t_stock stock, unsigned int len)
{
	unsigned int	i;

	i = 0;
	while (stock.strs[i])
	{
		if (count_zero(stock.strs[i]) + 1 == len && stock.prt)
		{
			ft_print_nb(stock.strs[i]);
			if (ft_strlen_num(stock.strs[i]) > 3 \
			&& ft_strlen_num(stock.strs[i]) % 3 == 1 \
			&& ft_nb_after(stock.input + 1))
				write(1, ",", 1);
			if (ft_nb_after(stock.input + 1))
				write (1, " ", 1);
		}
		if (count_zero(stock.strs[i]) + 1 == len)
			return (1);
		i++;
	}
	write(1, "Dict Error\n", 11);
	return (-1);
}

int	ft_teen(t_stock stock)
{
	if (stock.input[-1] && stock.prt && stock.input[-1] != '0')
		write(1, "and ", 4);
	if (stock.input[0] == '1')
		return (ft_search_num(stock, 2, 2));
	if (ft_search_num(stock, 1, 2) == -1)
		return (-1);
	if (stock.input[1] != '0' && stock.prt)
		write(1, "-", 1);
	return (1);
}

int	ft_hundred(t_stock stock)
{
	if (ft_search_num(stock, 1, 1) == -1)
		return (-1);
	if (stock.prt)
		write(1, " ", 1);
	if (ft_search_teeeeen(stock, 3) == -1)
		return (-1);
	return (1);
}
