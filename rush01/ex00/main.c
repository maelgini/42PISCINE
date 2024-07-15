/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 01:07:28 by florian           #+#    #+#             */
/*   Updated: 2024/07/07 19:34:34 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	print_grid(t_Puzzle puzzle)
{
	int	i;
	int	j;

	i = 0;
	while (i < puzzle.n)
	{
		j = 0;
		while (j < puzzle.n)
		{
			ft_putnbr(puzzle.grid[i][j]);
			if (j != puzzle.n - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	free_memory(t_Puzzle puzzle)
{
	int	i;

	i = 0;
	while (i < puzzle.n)
	{
		free(puzzle.grid[i]);
		free(puzzle.contraintes[i]);
		i++;
	}
	free(puzzle.grid);
	free(puzzle.contraintes);
}

void	add_constraints(t_Puzzle puzzle, char *constraints_str)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < puzzle.n)
		{
			n = (i * puzzle.n + j) * 2;
			puzzle.contraintes[i][j] = constraints_str[n] - '0';
			j++;
		}
		i++;
	}
}

void	init(t_Puzzle *puzzle, char *constraints_str)
{
	int	i;
	int	j;

	i = 0;
	puzzle->n = (ft_strlen(constraints_str) + 1) / 8;
	puzzle->grid = (int **)malloc(puzzle->n * sizeof(int *));
	puzzle->contraintes = (int **)malloc(4 * sizeof(int *));
	while (i < 4)
	{
		puzzle->contraintes[i] = (int *)malloc(puzzle->n * sizeof(int));
		i++;
	}
	i = 0;
	while (i < puzzle->n)
	{
		puzzle->grid[i] = (int *)malloc(puzzle->n * sizeof(int));
		j = 0;
		while (j < puzzle->n)
		{
			puzzle->grid[i][j] = 0;
			j++;
		}
		i++;
	}
	add_constraints(*puzzle, constraints_str);
}

int	main(int ac, char **av)
{
	t_Puzzle	puzzle;

	if (ac != 2 || ((ft_strlen(av[1]) + 1) / 2) % 4 != 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	init(&puzzle, av[1]);
	if (solve(puzzle, 0, 0))
		print_grid(puzzle);
	else
		write(1, "Error\n", 6);
	free_memory(puzzle);
	return (0);
}
