/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wivallee <wivallee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:15:32 by wivallee          #+#    #+#             */
/*   Updated: 2024/07/14 21:04:33 by wivallee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

typedef struct s_stock
{
	char	*input;
	char	**strs;
	int		prt;
	int		nb;
}				t_stock;

unsigned int	ft_strlen(char *str);
void			ft_bzero(void *s, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
unsigned int	ft_strlen_num(char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_recursive_power(int nb, int power);
char			**ft_split(char *str, char *charset);
void			ft_print_nb(char *str);
int				ft_work(t_stock stock);
int				ft_hundred(t_stock stock);
int				ft_teen(t_stock stock);
int				ft_search_num(t_stock stock, unsigned int s_cmp \
					, unsigned int s_size);
int				ft_search_teeeeen(t_stock stock, unsigned int len);
int				ft_nb_after(char *str_nb);
void			free_tab(char **tab);
void			free_all(t_stock *stock, int arg);
char			*dest_origin(char *dest, int fd);
int				all_is_there(t_stock *stock, int argc);
int				opening(int argc, char **argv);
int				create_tab(int fd, t_stock *stock);
int				taking_input(int argc, char **argv, t_stock *stock);
int				ft_check(char *str);

#endif
