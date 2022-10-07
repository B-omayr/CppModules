/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:24:31 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/07 10:34:18 by ibra             ###   ########.fr       */
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
    std::cout << "\033[1;32mClapTrap Copy Constructor Called\033[0;m" << std::endl;
    *this = oldOne;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &Input)
{
    if (this != &Input)
    {
        std::cout << "\033[1;32mClapTrap Copy Assignement operator Called\033[0;m" << std::endl;
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
    if (this->EnergyPoint > 0)
    {
        this->EnergyPoint--;
        std::cout << "ClapTrap " << this->Name << " attacks " << target << " , causing "
                  << this->AttackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "\033[1;31mClapTrap " << this->Name << \
                " Can't Attac cause he was no more EnergyPoint\033[0;m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoint > 0)
    {
        this->HitPoint -= amount;
        if (this->HitPoint < 0)
            this->HitPoint = 0;
        std::cout << "ClapTrap " << this->Name << " has Taken a Damage of " << amount << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoint <= 0)
    {
        std::cout << "\033[1;32mClapTrap " << this->Name << "Can't repaired Himself"
                  << " Cause He has no more Point of Energy\033[0;m" << std::endl;
        return;
    }
    if (this->EnergyPoint > 0)
    {
        this->EnergyPoint--;
        this->HitPoint += amount;
        std::cout << "ClapTrap " << this->Name << " repaired Himself with "
                  << amount << " of Energy" << std::endl;
    }
}

std::string ClapTrap::getName() const
{
    return this->Name;
}

unsigned int ClapTrap::getHP() const
{
    return this->HitPoint;
}

unsigned int ClapTrap::getAD() const
{
    return this->AttackDamage;
}

unsigned int ClapTrap::getEP() const
{
    return this->EnergyPoint;
}