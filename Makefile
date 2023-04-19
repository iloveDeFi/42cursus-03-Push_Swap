# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 15:25:49 by bbessard          #+#    #+#              #
#    Updated: 2023/04/13 11:47:06 by bbessard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c error.c algo1.c algo2.c normalize.c inst_Reverse.c 
inst_Rotate.c inst_Swap_Push.c checks.c stacks.c free.c algo_utils.c

SRC_DIR = sources/
OBJS	:= $(SRCS:%.c=%.o)
SRC = $(addprefix $(SRC_DIR), $(SRCS))

NAME	= push_swap

CC		= gcc
RM		= rm -f

CFLAGS 	= -Wall -Wextra -Werror #-fsanitize=address

all:		${NAME}

${NAME}:	${OBJS} libft printf
		${CC} ${CFLAGS} $^ -Llibft -lft -Lprintf -lftprintf -o ${NAME}

%.o:	$(SRC_DIR)%.c
		${CC} ${CFLAGS} -Ilibft -Iprintf -c $< -o $@

libft:
		make -C libft

printf:
		make -C printf

clean:
		make clean -C libft
		make clean -C printf
		${RM} ${OBJS}

fclean:		clean
		make fclean -C libft
		make fclean -C printf
		${RM} ${NAME}

re:			fclean all

.PHONY:		libft printf
