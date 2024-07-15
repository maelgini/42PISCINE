/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:43:45 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/11 12:24:17 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

void	ft_putchar(char c);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
void	op_mod(int a, int b);
void	op_mult(int a, int b);
void	op_add(int a, int b);
void	op_sub(int a, int b);
void	op_div(int a, int b);
#endif