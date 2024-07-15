/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:26:52 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/07 19:27:04 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

typedef struct puzzle
{
	int	**grid;
	int	**contraintes;
	int	n;
}			t_Puzzle;

int		ft_strlen(char *str);
int		solve(t_Puzzle puzzle, int row, int col);
int		is_valid(t_Puzzle puzzle);
int		can_be_placed(t_Puzzle puzzle, int row, int col, int height);
int		check_row_left(t_Puzzle puzzle, int row);
int		check_row_right(t_Puzzle puzzle, int row);
int		check_col_up(t_Puzzle puzzle, int col);
int		check_col_down(t_Puzzle puzzle, int col);
void	ft_putnbr(int nb);

#endif
