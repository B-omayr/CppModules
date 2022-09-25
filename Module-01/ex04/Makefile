# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 14:05:00 by iomayr            #+#    #+#              #
#    Updated: 2022/09/25 09:12:27 by iomayr           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++ 

SRC = main.cpp replace.cpp

OBJ = ${SRC:%.cpp=%.o}

INC = replace.hpp

NAME = replace

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