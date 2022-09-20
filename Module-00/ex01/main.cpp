/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:05:53 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/20 18:15:29 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void SetContact(
    std::string FirstName,
    std::string SecondName,
    std::string NickName,
    std::string PhoneNumber,
    std::string DarkestSecret)
{
    
}

int Phonebook::AddContact (
    std::string FirstName,
    std::string SecondName,
    std::string NickName,
    std::string PhoneNumber,
    std::string DarkestSecret)
{
    this->contact[0].SetContact(FirstName, SecondName, NickName, PhoneNumber, DarkestSecret)
    {
        
    } 
}                                                                               
                           

std::string GetInput(std::string str)
{
    std::string input;

    std::cout << "Enter " << str << " : ";
    getline(std::cin, input);
    if (!input.compare(""))
        std::cout << str << "\033[1;31m Field cannot be empty\033[0;m" << std::endl;
    return (input);
}

void FtAdd(Phonebook *Phonebook)
{
    std::string FirstName;
    std::string SecondName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;

    FirstName = GetInput("First Name");
    if (!FirstName[0])
        return;
    SecondName = GetInput("Second Name");
    if (!SecondName[0])
        return;
    NickName = GetInput("Nick Name");
    if (!NickName[0])
        return;
    PhoneNumber = GetInput("Phone Number");
    if (!PhoneNumber[0])
        return;
    DarkestSecret = GetInput("Darkest Secret");
    if (!DarkestSecret[0])
        return;
    if (Phonebook->AddContact(FirstName, SecondName, NickName, PhoneNumber, DarkestSecret))
}

int main()
{
    Phonebook phonebook;
    std::string input;
    while (1)
    {
        std::cout << "\033[1;33mCMD>\033[0m";
        getline(std::cin >> std::ws, input);
        if (input == "EXIT")
            return (std::cout << "\033[1;34mSee You Later!!!\033[0;m\n", 0);
        else if (input == "ADD")
            FtAdd(&phonebook);
    }
}