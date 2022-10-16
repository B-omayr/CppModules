/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:27:58 by ibra              #+#    #+#             */
/*   Updated: 2022/10/16 14:57:36 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "\033[1;32mBrain Constructor Called\033[0;m" << std::endl;
}

Brain::Brain(const Brain &oldOne)
{
    std::cout << "\033[1;32mBrain Copy Constructor Called\033[0;m" << std::endl;
    *this = oldOne;
}

Brain &Brain::operator = (const Brain &Input)
{
    if (this != &Input)
    {
        std::cout << "\033[1;32mBrain Copy Assignement Operator Called\033[0;m" << std::endl;
        for (int i = 0; i < 100; i++)
            this->ideas[i] = Input.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "\033[1;31mBrain Destructor Called\033[0;m" << std::endl;
}

void Brain::setIdeas(std::string idea)
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = idea;
    }
}

std::string Brain::getIdeas(int i) const
{
    return this->ideas[i];
}