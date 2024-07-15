/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivallee <wivallee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:35:33 by wivallee          #+#    #+#             */
/*   Updated: 2024/07/14 20:03:58 by wivallee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	free_all(t_stock *stock, int argc)
{
	if (stock->input != NULL && argc == 1)
		free(stock->input);
	if (stock->strs != NULL)
		free_tab(stock->strs);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
			i++;
	}
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if (src)
	{
		while (src[i] != '\0' && (i + 1) < size)
		{
			dst[i] = src[i];
			i++;
		}
		if (size > 0)
			dst[i] = '\0';
		while (src[len] != '\0')
			len++;
	}
	return (len);
}
