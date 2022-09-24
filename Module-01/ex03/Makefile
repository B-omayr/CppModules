# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 12:28:34 by iomayr            #+#    #+#              #
#    Updated: 2022/09/24 12:58:30 by iomayr           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++ 

SRC = main.cpp Weapon.cpp HumanB.cpp HumanA.cpp

INC = HumanA.hpp HumanB.hpp Weapon.hpp

OBJ = ${SRC:%.cpp=%.o}

NAME = violence

all: ${NAME}

${NAME}: ${OBJ} ${INC}
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME}
	@echo "\033[1;32m##########COMPILED SUCCESSFULY##########\033[0m"

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf ${NAME}
	@echo "\033[1;32m##########CLEANED SUCCESSFULY##########\033[0m"

re: fclean all