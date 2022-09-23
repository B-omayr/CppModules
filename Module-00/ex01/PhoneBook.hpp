/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:49:20 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/23 15:22:38 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Main.hpp"

class PhoneBook
{
private:
	//array of Object
    Contact			contact[8];
    
	//private member attribute
    unsigned int	NbContact;
    unsigned int	Index;

public:
    
    PhoneBook(void);  //Constructor
	~PhoneBook(void);
    
    //member function
    unsigned int	GetNbContact(void);
    void			DisplayContact(void);
    void			DisplayContact(unsigned int);
    int				AddContact(std::string FirstName,
						std::string SecondName, std::string NickName,
                   		std::string PhoneNumber, std::string DarkSecret);
                
};

#endif