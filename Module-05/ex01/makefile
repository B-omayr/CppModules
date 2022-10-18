# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 08:30:04 by iomayr            #+#    #+#              #
#    Updated: 2022/10/18 16:15:07 by iomayr           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -std=c++98

CC = c++

SRC = main.cpp Bureaucrat.cpp Form.cpp

OBJ = ${SRC:%.cpp=%.o}

INC = Bureaucrat.hpp Form.hpp

NAME = Bureaucrat

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