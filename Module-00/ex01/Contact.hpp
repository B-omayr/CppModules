/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:19:51 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/22 17:41:00 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "Main.hpp"

class Contact
{
private:
    //private member attribute
    std::string FirstName;
    std::string SecondName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;

public:
    //member functions
    std::string GetFirstName(void);
    std::string GetSecondName(void);
    std::string GetNickName(void);
    std::string GetPhoneNumber(void);
    std::string GetDarkSecret(void);
    void        SetContact(std::string FirstName,
                    std::string SecondName, std::string NickName,
                    std::string PhoneNumber, std::string DarkestSecret);

    Contact(void)
    {
    }
};

#endif