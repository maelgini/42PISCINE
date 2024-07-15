/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 10:43:51 by maelgini          #+#    #+#             */
/*   Updated: 2024/06/30 17:33:03 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (to_find[i] && str[i] == to_find[i])
				i++;
			if (!to_find[i])
				return (str);
		}
		str++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

char *ft_strstr(char *src, char *to_find);

int main(void)
{
	char str_src[]	= "Hello World!";
	char str_find[]	= "World!";

	printf("Text:%s\n", ft_strstr(str_src, str_find));
	printf("src:%s\n", str_src);
	printf("Search:%s\n",  str_find);
	return (0);
}
*/