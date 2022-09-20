# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 15:40:03 by iomayr            #+#    #+#              #
#    Updated: 2022/09/19 10:47:42 by iomayr           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++ 

SRC = megaphone.cpp 

NAME = megaphone

all: megaphone

${NAME}: ${SRC}
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean: #Nothing to be done for 'clean'

fclean: clean
	rm ${NAME}

re: fclean all