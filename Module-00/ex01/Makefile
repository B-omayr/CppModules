# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 08:40:06 by iomayr            #+#    #+#              #
#    Updated: 2022/09/23 15:47:26 by iomayr           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Main.cpp Contact.cpp PhoneBook.cpp Utiles.cpp

INC = PhoneBook.hpp Main.hpp Contact.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = ${SRC:%.cpp=%.o}

CC = c++

NAME = PhoneBook

all: ${NAME}

${NAME}: ${OBJ} ${INC}
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME}
	@echo "\033[1;32m##########COMPILED SUCCESSFULY##########\033[0m"

clean:
	@rm *.o

fclean: clean
	@rm -rf ${NAME}
	@echo "\033[1;32m##########CLEANED SUCCESSFULY##########\033[0m"

re: fclean all
