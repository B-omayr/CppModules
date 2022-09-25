# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/25 13:52:53 by iomayr            #+#    #+#              #
#    Updated: 2022/09/25 13:53:42 by iomayr           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++ 

SRC = main.cpp Harl.cpp

OBJ = ${SRC:%.cpp=%.o}

INC = Harl.hpp

NAME = Harl

all: ${NAME}

${NAME}: ${OBJ} ${INC}
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME}
	@echo "\033[1;32m##########COMPILED SUCCESSFULY##########\033[0m"

clean:
	@rm *.o

fclean: clean
	@rm ${NAME}
	@echo "\033[1;32m##########CLEANED SUCCESSFULY##########\033[0m"

re: fclean all