# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 09:57:37 by ibra              #+#    #+#              #
#    Updated: 2023/03/22 18:51:45 by ibra             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror 

CC = c++

SRC = main.cpp PmergeMe.cpp

OBJ = ${SRC:%.cpp=%.o}

INC = PmergeMe.hpp

NAME = PmergeMe

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