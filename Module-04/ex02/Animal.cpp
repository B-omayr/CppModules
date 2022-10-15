/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:41:35 by ibra              #+#    #+#             */
/*   Updated: 2022/10/15 12:59:06 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "\033[1;32mAnimal Constructor Called\033[0;m" << std::endl;
    this->type = "Animal";
}

Animal::Animal(Animal &oldOne)
{
    std::cout << "\033[1;32mAnimal Copy Constructor Called\033[0;m" << std::endl;
    *this = oldOne;
}

Animal &Animal::operator = (Animal &Input)
{
    if (this != &Input)
    {
        std::cout << "\033[1;32mAnimal Copy Assignement Operator Called\033[0;m" << std::endl;
        this->type = Input.type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "\033[1;31mAnimal Destructor Called\033[0;m" << std::endl;
}

std::string Animal::getType()
{
    return this->type;
}