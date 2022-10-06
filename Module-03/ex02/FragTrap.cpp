/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:42:40 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/06 09:27:47 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Unnamed FragTrap created--" << std::endl;
    this->AttackDamage = 0;
    this->EnergyPoint = 0;
    this->HitPoint = 0;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[1;32mFragTrap " << name << " created\033[0;m" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "\033[1;31mFragTrap " << this->Name << " destroyed\033[0;m" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (this->getEP() > 0)
    {
        this->EnergyPoint--;
        std::cout << "FragTrap " << this->getName() << " attacks " << target << " , causing "
                  << this->getAD() << " points of damage!" << std::endl;
    }
    else
        std::cout << "\033[1;31mFragTrap " << this->Name << \
                " Can't Attack cause he has no more EnergyPoint\033[0;m" << std::endl;
}