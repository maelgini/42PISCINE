/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:13:56 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/11 20:43:39 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <unistd.h>

int	main(int ac, char **av)
{
	void	(*op[5])(int x, int y);

	op[0] = &op_add;
	op[1] = &op_mult;
	op[2] = &op_sub;
	op[3] = &op_div;
	op[4] = &op_mod;
	if (ac != 4)
		return (0);
	if (ft_strlen(av[2]) != 1)
		return (write(1, "0\n", 2), 0);
	if (av[2][0] == '+')
		op[0](ft_atoi(av[1]), ft_atoi(av[3]));
	else if (av[2][0] == '*')
		op[1](ft_atoi(av[1]), ft_atoi(av[3]));
	else if (av[2][0] == '-')
		op[2](ft_atoi(av[1]), ft_atoi(av[3]));
	else if (av[2][0] == '/')
		op[3](ft_atoi(av[1]), ft_atoi(av[3]));
	else if (av[2][0] == '%')
		op[4](ft_atoi(av[1]), ft_atoi(av[3]));
	else
		write(1, "0\n", 2);
	return (0);
}
