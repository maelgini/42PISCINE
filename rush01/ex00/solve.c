/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:27:14 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/07 19:27:19 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	solve(t_Puzzle puzzle, int row, int col)
{
	int	height;

	if (row == puzzle.n)
		return (is_valid(puzzle));
	if (col == puzzle.n)
		return (solve(puzzle, row + 1, 0));
	height = 1;
	while (height <= puzzle.n)
	{
		if (can_be_placed(puzzle, row, col, height))
		{
			puzzle.grid[row][col] = height;
			if (solve(puzzle, row, col + 1))
				return (1);
			puzzle.grid[row][col] = 0;
		}
		height++;
	}
	return (0);
}
