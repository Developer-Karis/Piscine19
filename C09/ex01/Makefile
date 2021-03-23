# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 14:17:03 by kpapadop          #+#    #+#              #
#    Updated: 2021/03/23 15:12:29 by kpapadop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ${wildcard ./srcs/*.c}
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= libft.a

all :	${OBJS}
		${CC} -o ${NAME} ${OBJS}

${NAME}	:	all

clean : 
		rm -f {OBJS}

flean :	clean
		rm -f {NAME}

re :	fclean all
