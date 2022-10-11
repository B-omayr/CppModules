# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 16:53:13 by ibra              #+#    #+#              #
#    Updated: 2022/10/09 11:37:57 by ibra             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -std=c++98

CC = c++

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp 

OBJ = ${SRC:%.cpp=%.o}

INC = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

NAME = fiiire

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