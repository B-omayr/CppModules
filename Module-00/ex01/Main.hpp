/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:20:03 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/22 17:45:22 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

unsigned int    CheckInput(std::string str);
unsigned int    FtAtoi(std::string s);
void            DisplayColumn(std::string Column[4]);
std::string     GetInput(std::string str);
std::string     GetFirstChar(std::string str);

#endif