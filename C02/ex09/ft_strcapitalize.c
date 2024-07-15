/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:52:23 by maelgini          #+#    #+#             */
/*   Updated: 2024/06/29 21:02:57 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	capitalize(char c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	if (c >= '0' && c <= '9')
		return (0);
	if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && capitalize(str[i - 1]))
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*int main()
{
	char str[] = "42mots quaranTe-deux; cinQUante+et+un";
	printf("Avant strcap : %s\n", str);
	
	ft_str_capitalize(str);
	printf("Apres strcap : %s", str);

	return(0);
}
*/
