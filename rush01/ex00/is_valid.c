/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:27:38 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/07 19:27:40 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	is_valid(t_Puzzle puzzle)
{
	int	i;

	i = 0;
	while (i < puzzle.n)
	{
		if (!check_row_left(puzzle, i) || !check_row_right(puzzle, i)
			|| !check_col_up(puzzle, i) || !check_col_down(puzzle, i))
			return (0);
		i++;
	}
	return (1);
}
