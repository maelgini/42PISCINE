# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/07 16:46:46 by maelgini          #+#    #+#              #
#    Updated: 2024/07/07 21:20:57 by maelgini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
cc -Wall -Wextra -Werror -c *.c
ar -rcs libft.a *.o