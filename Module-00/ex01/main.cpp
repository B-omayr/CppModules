/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:05:53 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/23 12:17:13 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"             

void FtAdd(PhoneBook *Phonebook)
{
    std::string _FirstName;
    std::string _SecondName;
    std::string _NickName;
    std::string _PhoneNumber;
    std::string _DarkestSecret;

    _FirstName = GetInput("First Name");
    if (_FirstName.empty())
        return;
    _SecondName = GetInput("Second Name");
    if (_SecondName.empty())
        return;
    _NickName = GetInput("Nick Name");
    if (_NickName.empty())
        return;
    _PhoneNumber = GetInput("Phone Number");
    if (_PhoneNumber.empty())
        return;
    _DarkestSecret = GetInput("Darkest Secret");
    if (_DarkestSecret.empty())
        return;
    if (Phonebook->AddContact(_FirstName, _SecondName, _NickName, _PhoneNumber, _DarkestSecret))
        std::cout << "\033[1;34mYour Contact Was Add Succefully\033[0;m" << std::endl;
}

void FtSearch(PhoneBook *phonebook)
{
    std::string Input;
    unsigned int Index;
    
    phonebook->DisplayContact();
    std::cout << "Enter The Index of Contact : " ;
    if (getline(std::cin, Input) && !Input.empty() && CheckInput(Input))
    {
        Index = FtAtoi(Input);
        if (Index <= phonebook->GetNbContact())
            phonebook->DisplayContact(Index);
        else
            std::cout << "Index Out Of Range" << std::endl;
    } 
}

int main()
{
    PhoneBook   phonebook;
    std::string input;
    while (1)
    {
        std::cout << "\033[1;33mCMD>\033[0m";
        if (!getline(std::cin , input) || input == "EXIT")
            return (std::cout << "\n\033[1;34mSee You Later!!!\033[0;m\n", 0);
        else if (input == "ADD")
            FtAdd(&phonebook);
        else if (input == "SEARCH")
            FtSearch(&phonebook);
        else 
            std::cout << "\033[9;31mCommand Not Found\033[0;m" << std::endl;
    }
}