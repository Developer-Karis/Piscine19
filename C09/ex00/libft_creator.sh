# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 13:53:32 by kpapadop          #+#    #+#              #
#    Updated: 2021/03/25 17:05:43 by kpapadop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c -Wall -Werror -Wextra *.c
ar -rcs libft.a *.o
