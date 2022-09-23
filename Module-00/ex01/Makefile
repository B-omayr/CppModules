# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 08:40:06 by iomayr            #+#    #+#              #
#    Updated: 2022/09/23 09:12:48 by iomayr           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Main.cpp Contact.cpp PhoneBook.cpp Utiles.cpp

INC = PhoneBook.hpp Main.hpp Contact.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

NAME = PhoneBook

all: ${NAME}

${NAME}: ${SRC} ${INC}
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean: #Nothing to be done for 'clean'

fclean: clean
	rm ${NAME}

re: fclean all
