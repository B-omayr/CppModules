/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:25:17 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/05 13:52:48 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Unnamed ScavTrap was created-" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[1;32mScavTrap " << name << " created\033[0;m" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "\033[1;31mScavTrap "<< getName() << " destroyed-\033[0;m" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    int tmp;
    if (this->getEP() > 0)
    {
        tmp = this->getEP() - 1;
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << " , causing "
                  << this->getAD() << " points of damage!" << std::endl;
    }
}