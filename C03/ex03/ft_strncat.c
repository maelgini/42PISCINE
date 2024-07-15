/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:09:59 by maelgini          #+#    #+#             */
/*   Updated: 2024/06/30 17:35:19 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{	
	int				size;
	unsigned int	i;

	i = 0;
	size = ft_strlen(dest);
	while ((src[i] != '\0') && (i < nb))
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char src1[10]	= "abc";
	char dest1[10]   = "1234";

	char src[10]	= "abc";
	char dest[10]	= "1234";
	printf("Str: %s \n", strncat(dest1, src1, 1));
	printf("Str: %s", ft_strncat(dest, src, 1));
	return (0);
}
*/
