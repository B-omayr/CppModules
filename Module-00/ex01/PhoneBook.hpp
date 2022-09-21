/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:49:20 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/21 18:55:05 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include "iomanip"

class PhoneBook
{
private:
    Contact			contact[8];
    unsigned int	NbContact;
    unsigned int	Index;

public:
    
    unsigned int	GetNbContact(void);
	void			DisplayContact(void);
	
    int AddContact(std::string FirstName,
                   std::string SecondName, std::string NickName,
                   std::string PhoneNumber, std::string DarkSecret);
    PhoneBook(void);
};


#endif