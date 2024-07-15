/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_be_placed.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:28:04 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/07 19:28:06 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	can_be_placed(t_Puzzle puzzle, int row, int col, int height)
{
	int	i;

	i = 0;
	while (i < puzzle.n)
	{
		if (puzzle.grid[row][i] == height || puzzle.grid[i][col] == height)
			return (0);
		i++;
	}
	return (1);
}
