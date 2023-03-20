# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 10:33:36 by iomayr            #+#    #+#              #
#    Updated: 2023/03/20 13:55:12 by ibra             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = 

CC = c++

SRC = main.cpp BitcoinExchange.cpp

OBJ = ${SRC:%.cpp=%.o}

INC = BitcoinExchange.hpp

NAME = btc

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