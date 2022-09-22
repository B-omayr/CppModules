/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:22:16 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/22 16:27:37 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

void Contact::SetContact(
    std::string _FirstName,
    std::string _SecondName,
    std::string _NickName,
    std::string _PhoneNumber,
    std::string _DarkestSecret)
{
    this->FirstName = _FirstName;
    this->SecondName = _SecondName;
    this->NickName = _NickName;
    this->PhoneNumber = _PhoneNumber;
    this->DarkestSecret = _DarkestSecret;
}

// Getting Functions

std::string Contact::GetFirstName(void)
{
    return (this->FirstName);
}

std::string Contact::GetSecondName(void)
{
    return (this->SecondName);
}

std::string Contact::GetNickName(void)
{
    return (this->NickName);
}

std::string Contact::GetPhoneNumber(void)
{
    return (this->PhoneNumber);
}

std::string Contact::GetDarkSecret(void)
{
    return (this->DarkestSecret);
}