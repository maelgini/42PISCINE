/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:47:58 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/11 13:08:50 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strstrlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && s2[j])
	{
		if (s1[i] != s2[j])
		{
			break ;
		}
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	size;

	size = ft_strstrlen(tab);
	j = 0;
	while (j < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		j++;
	}
	tab[size] = NULL;
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	char *strs[6] = {"1234", "123", "000", "0", "Bonjour", "avfbot"};
// 	ft_sort_string_tab(strs);
// 	while (strs[i])
// 	{
// 		printf("%s\n", strs[i]);
// 		i++;
// 	}
// 	return (0);
// }
