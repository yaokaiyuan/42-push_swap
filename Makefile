# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykai-yua <ykai-yua@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/03 18:30:30 by ykai-yua          #+#    #+#              #
#    Updated: 2024/07/16 19:30:41 by ykai-yua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =  src/instructions/push.c \
			src/instructions/reverserotate.c \
			src/instructions/rotate.c \
			src/instructions/swap.c \
			src/big.c \
			src/main.c \
			src/simple.c \
			utils/check_args.c \
			utils/index.c \
			utils/listtools.c \
			utils/utils.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes -g3

RM = rm -rf

all: ${NAME}
${NAME}: ${OBJS}
	${MAKE} -C ./libft
	${CC} ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}

clean: 
	${MAKE} -C ./libft fclean
	${RM} ${OBJS}

fclean: clean
	 ${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re