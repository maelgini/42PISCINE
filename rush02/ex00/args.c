/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:46:55 by wivallee          #+#    #+#             */
/*   Updated: 2024/07/14 19:00:47 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_is_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
			return (-1);
		i++;
	}
	return (i);
}

int	opening(int argc, char **argv)
{
	if (argc == 3)
		return (open(argv[1], O_RDONLY));
	else if (argc <= 2)
		return (open("numbers.dict", O_RDONLY));
	else
		return (-1);
}

int	taking_input(int argc, char **argv, t_stock *stock)
{
	if (argc == 1)
	{
		stock->input = NULL;
		stock->input = dest_origin(stock->input, 0);
	}
	else if (argc == 2)
		stock->input = argv[1];
	else
		stock->input = argv[2];
	if (stock->input == NULL)
	{
		free_all(stock, argc);
		return (-1);
	}
	if (ft_is_num(stock->input) < 1)
	{
		write(2, "Error\n", 6);
		free_all(stock, argc);
		return (-1);
	}
	return (0);
}
