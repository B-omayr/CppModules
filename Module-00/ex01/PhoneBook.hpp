/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:49:20 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/20 17:40:49 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class Phonebook
{
private:
    Contact contact[8];

public:
    int AddContact(std::string FirstName,
                   std::string SecondName, std::string NickName,
                   std::string PhoneNumber, std::string DarkSecret);
};

#endif