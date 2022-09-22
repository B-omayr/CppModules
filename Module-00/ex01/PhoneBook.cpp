/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:29:13 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/22 18:33:05 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

unsigned int PhoneBook::GetNbContact(void)
{
    return (this->NbContact);
}

std::string ConvertToString(int num)
{
    std::ostringstream str1;
    std::string output;

    str1 << num;
    output = str1.str();
    return (output);
}

void PhoneBook::DisplayContact(void)
{
    std::string Column[4] = {"Index", "FirstName", "Last Name", "Nickname"};
    
    DisplayColumn(Column);
    for (int i = 0; i < this->NbContact; i++)
    {
        std::string Column[4] = {
            ConvertToString(i + 1),
            this->contact[i].GetFirstName(),
            this->contact[i].GetSecondName(),
            this->contact[i].GetNickName()};
        DisplayColumn(Column);
    }
    std::cout << std::string(45, '-') << std::endl;
}

void PhoneBook::DisplayContact(unsigned int Index)
{
    std::cout << Index << std::endl;
    std::cout << "First Name    :  " << this->contact[Index - 1].GetFirstName() << std::endl;
    std::cout << "Second Name   :  " << this->contact[Index - 1].GetSecondName() << std::endl;
    std::cout << "Nick Name     :  " << this->contact[Index - 1].GetNickName() << std::endl;
    std::cout << "Phone Number  :  " << this->contact[Index - 1].GetPhoneNumber() << std::endl;
    std::cout << "Darkest Secret:  " << this->contact[Index - 1].GetDarkSecret() << std::endl;
}

int PhoneBook::AddContact(
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
 \033[1;32m----------\033[0;m+"
              << std::endl;
    std::cout << "\033[1;32m|\033[0;m                   ADD                       \
\033[1;32m|\033[0;m "
              << std::endl;
    std::cout << "\033[1;32m|\033[0;m                  SEARCH                     \
\033[1;32m|\033[0;m "
              << std::endl;
    std::cout << "\033[1;32m|\033[0;m                   EXIT                      \
\033[1;32m|\033[0;m "
              << std::endl;
    std::cout << "+\033[1;32m" << std::string(45, '-') << "\033[0;m+" << std::endl;
    this->Index = 0;
    this->NbContact = 0;
}