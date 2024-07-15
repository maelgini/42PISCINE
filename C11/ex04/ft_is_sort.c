/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:42:03 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/11 13:05:33 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	test;

	test = 1;
	i = 0;
	while ((i < length - 1))
	{
		if (f(tab[i], tab[i + 1]) > 0)
			test = 0;
		i++;
	}
	i = 0;
	if (test == 1)
		return (1);
	while ((i < length - 1))
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdlib.h>
// #include <stdio.h>

// int	ft_test(int	a, int b)
// {
// 	return (a - b);
// }

// int    main(int argc, char *argv[])
// {
//     int    i;
//     int    tab[argc - 1];

//     i = 1;
//     while (i < argc)
//     {
//         tab[i - 1] = atoi(argv[i]);
//         i++;
//     }
//     printf("verification du tri du tableau :");
//     // print_tab(tab, argc - 1);
//     printf("-> est trie : %d\n", ft_is_sort(tab, argc - 1, &ft_test));
// }