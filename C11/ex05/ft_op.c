/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:57:59 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/13 10:41:51 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"

void	op_add(int a, int b)
{
	ft_putnbr(a + b);
	write(1, "\n", 1);
}

void	op_mult(int a, int b)
{
	ft_putnbr(a * b);
	write(1, "\n", 1);
}

void	op_sub(int a, int b)
{
	ft_putnbr(a - b);
	write(1, "\n", 1);
}

void	op_div(int a, int b)
{
	if (b == 0)
		write(2, "Stop : division by zero\n", 24);
	else
	{
		ft_putnbr(a / b);
		write(1, "\n", 1);
	}
}

void	op_mod(int a, int b)
{
	if (b == 0)
		write(2, "Stop : modulo by zero\n", 22);
	else
	{
		ft_putnbr(a % b);
		write(1, "\n", 1);
	}
}
