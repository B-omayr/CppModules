# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 15:33:54 by iomayr            #+#    #+#              #
#    Updated: 2022/09/27 16:17:27 by iomayr           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp 

OBJ = ${SRC:%.cpp=%.o}

INC = Zombie.hpp

NAME = BraiiiiiiinnnzzzZ

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