/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:39:42 by ibra              #+#    #+#             */
/*   Updated: 2022/10/07 17:45:56 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "\033[1;32mWrongCat Constructor Called\033[0;m" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &oldOne)
{
    std::cout << "\033[1;32;mWrongCat Copy Constructor Called\033[0;m" << std::endl;
    *this = oldOne;
}

WrongCat &WrongCat::operator = (const WrongCat &Input)
{
    if (this != &Input)
    {
        std::cout << "\033[1;32mWrongCat Copy assignement operator Called\033[0;m" << std::endl;
        this->type = Input.type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "\033[1;31mWrongCat Destructor Called\033[0;m" << std::endl;
}

void WrongCat::makeSound()
{
    std::cout << "\033[1;36mMeeow  Meeow  Meeow\033[0;m" << std::endl;
}