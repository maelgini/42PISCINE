/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivallee <wivallee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:31:12 by wivallee          #+#    #+#             */
/*   Updated: 2024/07/14 21:51:00 by wivallee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	all_is_there(t_stock *stock, int argc)
{
	stock->input = "1211312413514615716817918019020030040";
	if (ft_work(*stock) == -1)
	{
		free_all(stock, argc);
		return (-1);
	}
	stock->input = "050060070080090010";
	if (ft_work(*stock) == -1)
	{
		free_all(stock, argc);
		return (-1);
	}
	stock->input = "0";
	if (ft_work(*stock) == -1)
	{
		free_all(stock, argc);
		return (-1);
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		len1;
	int		len2;
	char	*fusion;

	len1 = 0;
	len2 = 0;
	fusion = NULL;
	if (s1 != NULL || s2 != NULL)
	{
		if (s1 != NULL)
			len1 = ft_strlen(s1);
		if (s2 != NULL)
			len2 = ft_strlen(s2);
		fusion = (char *)malloc((len1 + len2) + 1 * sizeof(char));
		if (fusion == NULL)
			return (NULL);
		ft_bzero(fusion, len1 + len2 + 1);
		if (s1 != NULL)
			ft_strlcpy(fusion, s1, len1 + 1);
		if (s2 != NULL)
			ft_strlcpy(&fusion[len1], s2, len2 + 1);
	}
	free(s1);
	return (fusion);
}

char	*dest_origin(char *dest, int fd)
{
	ssize_t		bytes_read;
	char		*temp;

	temp = NULL;
	temp = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		ft_bzero(temp, BUFFER_SIZE + 1);
		bytes_read = read(fd, temp, BUFFER_SIZE);
		if (bytes_read < 0)
		{
			if (dest != NULL)
				free(dest);
			free(temp);
			return (NULL);
		}
		dest = ft_strjoin(dest, temp);
		if (dest == NULL)
			break ;
	}
	free(temp);
	return (dest);
}

int	create_tab(int fd, t_stock *stock)
{
	char	*line;
	int		i;

	i = 0;
	line = NULL;
	stock->input = NULL;
	line = dest_origin(line, fd);
	if (line == NULL)
		return (-1);
	stock->strs = ft_split(line, "\n");
	free(line);
	if (stock->strs == NULL)
		return (-1);
	while (stock->strs[i])
	{
		if (ft_check(stock->strs[i]) == -1)
		{
			write(2, "Dict Error\n", 11);
			return (-1);
		}
		i++;
	}
	return (0);
}
