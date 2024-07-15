/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 21:32:05 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/02 20:59:48 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	char	*str;

	i = ac - 1;
	if (ac < 2)
		return (0);
	while (i > 0)
	{
		str = av[i];
		while (*str)
		{
			write(1, str, 1);
				str++;
		}
		write(1, "\n", 1);
		i--;
	}
}
