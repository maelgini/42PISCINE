/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:46:27 by wivallee          #+#    #+#             */
/*   Updated: 2024/07/14 18:27:15 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		fd;
	t_stock	stock;

	fd = opening(argc, argv);
	if (fd == -1)
		return (1);
	if (create_tab(fd, &stock) == -1)
		return (1);
	if (stock.strs == NULL)
		return (1);
	stock.prt = 0;
	if (all_is_there(&stock, argc) == -1)
		return (1);
	if (taking_input(argc, argv, &stock) == -1)
		return (1);
	if (ft_work(stock) == -1)
	{
		free_all(&stock, argc);
		return (1);
	}
	stock.prt = 1;
	ft_work(stock);
	write(1, "\n", 1);
	free_all(&stock, argc);
	return (0);
}
