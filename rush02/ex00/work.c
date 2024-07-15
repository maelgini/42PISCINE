/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raserre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:55:35 by raserre-          #+#    #+#             */
/*   Updated: 2024/07/13 17:55:37 by raserre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_nb_after(char *str_nb)
{
	if (*str_nb == '\0')
		return (0);
	else if (*str_nb != '0')
		return (1);
	return (ft_nb_after(str_nb + 1));
}

int	ft_num_by_three(t_stock stock, unsigned int mod)
{
	if (*stock.input != '0')
	{
		if (mod == 0)
			return (ft_hundred(stock));
		if (mod == 2)
			return (ft_teen(stock));
		if (mod == 1 && stock.input[-1] != '1')
			return (ft_search_num(stock, 1, 1));
	}
	return (1);
}

int	ft_work(t_stock stock)
{
	unsigned int	len;

	len = ft_strlen(stock.input);
	if (*stock.input == '0' && ft_strlen(stock.input) == 1)
		ft_search_num(stock, 1, 1);
	while (*stock.input)
	{
		if (!(*stock.input >= '0' && *stock.input <= '9'))
			return (-1);
		if (*stock.input != '0')
			stock.nb = 1;
		if (ft_num_by_three(stock, len % 3) == -1)
			return (-1);
		if (len > 3 && len % 3 == 1 && stock.nb == 1)
		{
			if (stock.prt)
				write(1, " ", 1);
			if (ft_search_teeeeen(stock, len) == -1)
				return (-1);
			stock.nb = 0;
		}
		stock.input++;
		len--;
	}
	return (1);
}
