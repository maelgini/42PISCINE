/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:08:50 by maelgini          #+#    #+#             */
/*   Updated: 2024/06/26 17:50:16 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar(char c);

int		main(void)
{
	ft_putchar('S');
	ft_putchar('u');
	ft_putchar('c');
	ft_putchar('c');
	ft_putchar('e');
	ft_putchar('s');
	ft_putchar('s');
}
