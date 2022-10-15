/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:39:07 by ibra              #+#    #+#             */
/*   Updated: 2022/10/07 17:43:41 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "\033[1;32mWrongAnimal Constructor Called\033[0;m" << std::endl;
    this->type = "Animal";
}

WrongAnimal::WrongAnimal(WrongAnimal &oldOne)
{
    std::cout << "\033[1;32mWrongAnimal Copy Constructor Called\033[0;m" << std::endl;
    *this = oldOne;
}

WrongAnimal &WrongAnimal::operator = (WrongAnimal &Input)
{
    if (this != &Input)
    {
        std::cout << "\033[1;32mCopy Assignement Operator Called\033[0;m" << std::endl;
        this->type = Input.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "\033[1;31mWrongAnimal Destructor Called\033[0;m" << std::endl;
}

std::string WrongAnimal::getType()
{
    return this->type;
}

void WrongAnimal::makeSound()
{
    std::cout << "\033[1;36mWrongAnimal Make sound\033[0;m" << std::endl;
}