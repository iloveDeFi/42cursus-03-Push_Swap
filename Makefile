# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 15:25:49 by bbessard          #+#    #+#              #
#    Updated: 2023/06/01 13:47:28 by bbessard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= swap_and_push.c rotate.c reverse.c checks.c stacks.c \
 free.c sort_help.c sort.c sort_small.c normalize.c errors.c main.c \

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