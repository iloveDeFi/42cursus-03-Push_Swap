# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 15:25:49 by bbessard          #+#    #+#              #
#    Updated: 2023/02/28 14:24:38 by bbessard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c error.c algo1.c algo2.c normalize.c inst_Reverse.c inst_Rotate.c inst_Swap_Push.c checks.c stacks.c free.c algo_utils.c

SRC_DIR = sources/
OBJS	:= $(SRCS:%.c=%.o)
SRC = $(addprefix $(SRC_DIR), $(SRCS))

NAME	= push_swap

CC		= gcc -g
RM		= rm -f

CFLAGS 	= -Wall -Wextra -Werror #-fsanitize=address

all:		${NAME}

%.o:	$(SRC_DIR)%.c
		${CC} ${CFLAGS} -Ilibft -Iprintf -c $? -o $@

${NAME}:	${OBJS}
		@make -C libft
		@make -C printf
		${CC} ${CFLAGS} $^ -Llibft -lft -Lprintf -lftprintf -o ${NAME}

libft:
		make -C libft

printf:
		make -C printf

clean:
			make clean -C libft
			make clean -C printf
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		libft printf