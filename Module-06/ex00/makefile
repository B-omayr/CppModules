# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 10:30:38 by ibra              #+#    #+#              #
#    Updated: 2022/10/25 16:26:41 by ibra             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -std=c++11

CC = c++

SRC = main.cpp Casting.cpp

OBJ = ${SRC:%.cpp=%.o}

INC = Casting.hpp

NAME = Conversion

%.o : %.cpp ${INC}
	@${CC} ${FLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJ} ${INC}
	@${CC} ${FLAGS} ${OBJ} -o ${NAME}
	@echo "\033[1;32m##########COMPILED SUCCESSFULY##########\033[0m"

clean:
	@rm -rf ${OBJ}

fclean: clean
	@rm -rf ${NAME}
	@echo "\033[1;32m##########CLEANED SUCCESSFULY##########\033[0m"

re: fclean all