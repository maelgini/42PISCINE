/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivallee <wivallee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:48:22 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/14 21:49:30 by wivallee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_skip_isspaces(char *str)
{
	int	i;

	i = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	ft_check(char *str)
{
	int	i;

	i = ft_skip_isspaces(str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			return (-1);
		else if (str[i + 1] == '-' || str[i + 1] == '+')
			return (-1);
		else
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (str[i] == ' ')
		i++;
	if (str[i] == ':')
		i++;
	else
		return (-1);
	while (str[i] == ' ')
		i++;
	while ((str[i] > 33 && str[i] < 127) && (str[i] != '\0'))
		i++;
	return (0);
}
