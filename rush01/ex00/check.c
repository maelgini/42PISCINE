/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:27:55 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/07 19:27:58 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_row_left(t_Puzzle puzzle, int row)
{
	int	max_height ;
	int	visible_buildings;
	int	i;

	max_height = 0;
	visible_buildings = 0;
	i = 0;
	while (i < puzzle.n)
	{
		if (puzzle.grid[row][i] > max_height)
		{
			max_height = puzzle.grid[row][i];
			visible_buildings++;
		}
		i++;
	}
	return (visible_buildings == puzzle.contraintes[2][row]);
}

int	check_row_right(t_Puzzle puzzle, int row)
{
	int	max_height;
	int	visible_buildings;
	int	i;

	max_height = 0;
	visible_buildings = 0;
	i = puzzle.n - 1;
	while (i >= 0)
	{
		if (puzzle.grid[row][i] > max_height)
		{
			max_height = puzzle.grid[row][i];
			visible_buildings++;
		}
		i--;
	}
	return (visible_buildings == puzzle.contraintes[3][row]);
}

int	check_col_up(t_Puzzle puzzle, int col)
{
	int	max_height;
	int	visible_buildings;
	int	i;

	max_height = 0;
	visible_buildings = 0;
	i = 0;
	while (i < puzzle.n)
	{
		if (puzzle.grid[i][col] > max_height)
		{
			max_height = puzzle.grid[i][col];
			visible_buildings++;
		}
		i++;
	}
	return (visible_buildings == puzzle.contraintes[0][col]);
}

int	check_col_down(t_Puzzle puzzle, int col)
{
	int	max_height;
	int	visible_buildings;
	int	i;

	max_height = 0;
	visible_buildings = 0;
	i = puzzle.n - 1;
	while (i >= 0)
	{
		if (puzzle.grid[i][col] > max_height)
		{
			max_height = puzzle.grid[i][col];
			visible_buildings++;
		}
		i--;
	}
	return (visible_buildings == puzzle.contraintes[1][col]);
}
