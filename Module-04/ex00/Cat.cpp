/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:48:55 by ibra              #+#    #+#             */
/*   Updated: 2022/10/16 15:00:55 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "\033[1;32mCat Constructor Called\033[0;m" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &oldOne)
{
    std::cout << "\033[1;32;mCat Copy Constructor Called\033[0;m" << std::endl;
    *this = oldOne;
}

Cat &Cat::operator = (const Cat &Input)
{
    if (this != &Input)
    {
        std::cout << "\033[1;32mCat Copy assignement operator Called\033[0;m" << std::endl;
        this->type = Input.type;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "\033[1;31mCat Destructor Called\033[0;m" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "\033[1;36mMeeow  Meeow  Meeow\033[0;m" << std::endl;
}