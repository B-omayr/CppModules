/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:25:17 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/05 19:10:25 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Unnamed ScavTrap was created-" << std::endl;
    this->AttackDamage = 0;
    this->EnergyPoint = 0;
    this->HitPoint = 0;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[1;32mScavTrap " << name << " created\033[0;m" << std::endl;
    this->AttackDamage = 100;
    this->EnergyPoint = 50;
    this->HitPoint = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "\033[1;31mScavTrap "<< getName() << " destroyed-\033[0;m" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->getEP() > 0)
    {
        this->EnergyPoint--;
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << " , causing "
                  << this->getAD() << " points of damage!" << std::endl;
    }
    else
        std::cout << "\033[1;31mScavTrap " << this->Name << \
                " Can't Attac cause he was no more EnergyPoint\033[0;m" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->Name << " now in Gate keeper mode" << std::endl;
}