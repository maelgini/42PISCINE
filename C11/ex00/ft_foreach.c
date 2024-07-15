/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:34:39 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/11 15:10:58 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	unsigned int	n;

// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		n = -nb;
// 	}
// 	else
// 		n = nb;
// 	if (n > 9)
// 	{
// 		ft_putnbr(n / 10);
// 		n %= 10;
// 	}
// 	ft_putchar(n + '0');
// }

// int	main(void)
// {
// 	int	tab[5];

// 	tab[0] = -1;
// 	tab[1] = -55;
// 	tab[2] = -2147483648;
// 	tab[3] = 2147483647;
// 	tab[4] = 0;
// 	ft_foreach(tab, 5, &ft_putnbr);
// }
