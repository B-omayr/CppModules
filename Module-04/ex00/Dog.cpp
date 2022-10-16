/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:40:10 by ibra              #+#    #+#             */
/*   Updated: 2022/10/16 15:01:09 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "\033[1;32mDog Constructor Called\033[0;m" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &oldOne)
{
    std::cout << "\033[1;32mDog Copy Constructor Called\033[0;m" << std::endl;
    *this = oldOne;
}

Dog &Dog::operator = (const Dog &Input)
{
    if (this != &Input)
    {
        std::cout << "\033[1;32mDog Copy Assignement Operator Called\033[0;m" << std::endl;
        this->type = Input.type;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "\033[1;31mDog Destructor Called\033[0;m" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "\033[1;36mHaaw Haaw Haaw Haaw Haaw\033[0;m" << std::endl;
}
