/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:29:13 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/22 11:19:58 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

unsigned int PhoneBook::GetNbContact(void)
{
    return (this->NbContact);
}

int PhoneBook::AddContact (
    std::string FirstName,
    std::string SecondName,
    std::string NickName,
    std::string PhoneNumber,
    std::string DarkestSecret)
{
    this->contact[this->Index].SetContact(FirstName, SecondName, NickName, PhoneNumber, DarkestSecret);
    this->Index = (this->Index + 1) % 8;
    this->NbContact = (this->NbContact == 8 ? 8 : this->NbContact + 1);
    return (1);
}

PhoneBook::PhoneBook(void)
{
    std::cout << "+\033[1;32m---------- \033[7;33mWelcome To Your Contact\033[0;m\
 \033[1;32m----------\033[0;m+" << std::endl;
    std::cout << "\033[1;32m|\033[0;m                   ADD                       \
\033[1;32m|\033[0;m " << std::endl;
    std::cout << "\033[1;32m|\033[0;m                  SEARCH                     \
\033[1;32m|\033[0;m " << std::endl;
    std::cout << "\033[1;32m|\033[0;m                   EXIT                      \
\033[1;32m|\033[0;m " << std::endl;
    std::cout << "+\033[1;32m" << std::string(45, '-') <<"\033[0;m+" << std::endl;
    this->Index = 0;
    this->NbContact = 0;
}