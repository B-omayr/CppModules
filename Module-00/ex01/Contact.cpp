/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:22:16 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/20 18:43:56 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::SetContact(
    std::string FirstName,
    std::string SecondName,
    std::string NickName,
    std::string PhoneNumber, 
    std::string DarkestSecret)
{
    this->FirstName = FirstName;
    this->SecondName = SecondName;
    this->NickName = NickName;
    this->PhoneNumber = PhoneNumber;
    this->DarkestSecret = DarkestSecret;
}