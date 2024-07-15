/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:02:33 by maelgini          #+#    #+#             */
/*   Updated: 2024/07/09 13:15:44 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# include <stdbool.h>

typedef char	t_bool;
# define TRUE 1
# define FALSE 0

# define SUCCESS 0
# define EVEN_MSG  "I have an even number of arguments.\n"
# define ODD_MSG  "I have an odd amount of arguments.\n"

# define EVEN(X) ((X % 2)? 0 : 1)

#endif