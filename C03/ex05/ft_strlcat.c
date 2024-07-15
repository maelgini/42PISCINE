/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:59:11 by maelgini          #+#    #+#             */
/*   Updated: 2024/06/30 16:31:53 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lensrc;
	unsigned int	lendest;

	lensrc = 0;
	lendest = 0;
	i = 0;
	while (src[lensrc])
		lensrc++;
	while (dest[lendest])
		lendest++;
	j = lendest;
	if (size == 0 || size <= lendest)
		return (lensrc + size);
	while (i < size - lendest - 1 && src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (lendest + lensrc);
}
