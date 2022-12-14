/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:42:40 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/07 12:41:19 by ibra             ###   ########.fr       */
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

FragTrap::FragTrap(const FragTrap &oldOne) : ClapTrap()
{
    std::cout << "\033[1;32mFragTrap Copy Constructor Called\033[0;m" << std::endl;
    *this = oldOne;
}

FragTrap &FragTrap::operator = (const FragTrap &Input)
{
    if (this != &Input)
    {
        std::cout << "\033[1;32mFragTrap Copy Assignement Operator Called\033[0;m" << std::endl;
        this->Name = Input.Name;
        this->HitPoint = Input.HitPoint;
        this->EnergyPoint = Input.EnergyPoint;
        this->AttackDamage = Input.AttackDamage;
    }
    return *this;
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