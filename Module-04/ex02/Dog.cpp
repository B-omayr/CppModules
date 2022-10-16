/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:40:10 by ibra              #+#    #+#             */
/*   Updated: 2022/10/16 15:03:47 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "\033[1;32mDog Constructor Called\033[0;m" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(Brain *brain)
{
    std::cout << "\033[1;32mDog Parametrized Constructor Called\033[0;m" << std::endl;
    this->brain = new Brain();
    this->brain->setIdeas(brain->getIdeas(0));
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
        this->brain = new Brain;
        *this->brain = *Input.getBrain();
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "\033[1;31mDog Destructor Called\033[0;m" << std::endl;
    delete this->brain;
}

void Dog::makeSound() const
{
    std::cout << "\033[1;36mHaaw Haaw Haaw Haaw Haaw\033[0;m" << std::endl;
}

Brain *Dog::getBrain() const 
{
    return (this->brain);
}
