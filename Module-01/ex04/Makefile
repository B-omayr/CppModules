# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 14:05:00 by iomayr            #+#    #+#              #
#    Updated: 2022/09/27 16:16:55 by iomayr           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++ 

SRC = main.cpp replace.cpp

OBJ = ${SRC:%.cpp=%.o}

INC = replace.hpp

NAME = replace

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