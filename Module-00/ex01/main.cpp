/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:05:53 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/22 12:44:48 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"             

std::string GetInput(std::string str)
{
    std::string input;

    std::cout << "Enter " << str << " : ";
    if (!getline(std::cin, input) || !input.compare(""))
    {
        std::cout << "\033[1;31mWarning : \" Field cannot be empty!!! \"\033[0;m" << std::endl;
        std::cout << "\033[1;34mMake Sure To Fill All The Field Next Time ...\033[0;m" << std::endl ;
    }  
    return (input);
}

void FtAdd(PhoneBook *Phonebook)
{
    std::string _FirstName;
    std::string _SecondName;
    std::string _NickName;
    std::string _PhoneNumber;
    std::string _DarkestSecret;

    _FirstName = GetInput("First Name");
    if (!_FirstName[0])
        return;
    _SecondName = GetInput("Second Name");
    if (!_SecondName[0])
        return;
    _NickName = GetInput("Nick Name");
    if (!_NickName[0])
        return;
    _PhoneNumber = GetInput("Phone Number");
    if (!_PhoneNumber[0])
        return;
    _DarkestSecret = GetInput("Darkest Secret");
    if (!_DarkestSecret[0])
        return;
    if (Phonebook->AddContact(_FirstName, _SecondName, _NickName, _PhoneNumber, _DarkestSecret))
        std::cout << "\033[1;34mYour Contact Was Add Succefully\033[0;m" << std::endl;
}

void DisplayColumn(std::string Column[4])
{
    char str[11];
    std::cout << std::string(45, '-') << std::endl;
    std::cout << "|" ;
    for (int i = 0; i < 4; i++)
    {
        if (Column[i].length() >= 10)
        {
            Column[i] = Column[i].substr(0, 9);
            Column[i].copy(str, 10, 0);
            str[9] = '.';
            str[10] = '\0';
            Column[i] = str;
        }
        std::cout << std::setw(10) << Column[i] ;
        std::cout << "|" ;
    }
    std::cout << std::endl;
}

std::string ConvertToString(int num)
{
    std::ostringstream   str1;
    std::string          output;
    
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

void FtSearch(PhoneBook *phonebook)
{
    phonebook->DisplayContact();
    // std::cout << ""
}

int main()
{
    PhoneBook phonebook;
    std::string input;
    while (1)
    {
        std::cout << "\033[1;33mCMD>\033[0m";
       ;
        if (!getline(std::cin >> std::ws, input) || input == "EXIT")
            return (std::cout << "\n\033[1;34mSee You Later!!!\033[0;m\n", 0);
        else if (input == "ADD")
            FtAdd(&phonebook);
        else if (input == "SEARCH")
            FtSearch(&phonebook);
    }
}