# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 14:17:03 by kpapadop          #+#    #+#              #
#    Updated: 2021/03/24 21:06:14 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= libft.a

.c.o : 	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

all :	${NAME}

${NAME}	:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

clean : 
		rm -f {OBJS}

flean :	clean
		rm -f {NAME}

re :	fclean all

.PHONY : all clean fclean re