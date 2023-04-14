# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lobufard <lobufard@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 04:45:39 by lobufard          #+#    #+#              #
#    Updated: 2023/04/14 04:45:44 by lobufard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a

SRCS = get_next_line.c get_next_line_utils.c

OBJS = ${SRCS:.c=.o}


CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

$(OBJS): %.o: %.c
		gcc ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

clean:
		rm -f ${OBJS} ${OBJSBONUS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all
