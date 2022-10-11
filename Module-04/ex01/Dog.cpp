/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:40:10 by ibra              #+#    #+#             */
/*   Updated: 2022/10/09 11:43:39 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "\033[1;32mDog Constructor Called\033[0;m" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
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
    delete this->brain;
}

void Dog::makeSound()
{
    std::cout << "\033[1;36mHaaw Haaw Haaw Haaw Haaw\033[0;m" << std::endl;
}
