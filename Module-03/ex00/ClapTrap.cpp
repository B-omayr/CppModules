/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:19:33 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/03 18:20:29 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Unnamed ClapTrap was created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->Name = name;
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
    std::cout << "\033[1;32mClapTrap " << name << " created\033[0;m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &oldOne)
{
    *this = oldOne;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &Input)
{
    if (this != &Input)
    {
        this->Name = Input.Name;
        this->HitPoint = Input.HitPoint;
        this->EnergyPoint = Input.EnergyPoint;
        this->AttackDamage = Input.AttackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "\033[1;31mClapTrap " << this->Name << " destroyed\033[0;m" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->HitPoint > 0)
    {
        this->HitPoint--;
        std::cout << "ClapTrap " << this->Name << " attacks " << target << " , causing " \
            << this->AttackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->HitPoint -= amount; 
    std::cout << "ClapTrap " << this->Name << " as Taken a Damage of " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoint > 0)
    {
        this->HitPoint--;
        std::cout << "ClapTrap " << this->Name << "repaired His self with " \
                << amount << " of Energy" << std::endl; 
    }
}
