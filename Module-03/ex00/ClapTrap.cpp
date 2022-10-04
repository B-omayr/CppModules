/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:19:33 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/04 12:54:59 by ibra             ###   ########.fr       */
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
        this->EnergyPoint--;
        std::cout << "ClapTrap " << this->Name << " attacks " << target << " , causing " \
            << this->AttackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->HitPoint = this->HitPoint - amount; 
    std::cout << "ClapTrap " << this->Name << " as Taken a Damage of " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoint > 0)
    {
        this->EnergyPoint--;
        this->HitPoint += amount;
        std::cout << "ClapTrap " << this->Name << "repaired His self with " \
                << amount << " of Energy" << std::endl; 
    }
}

void ClapTrap::setHitPoint(void)
{
    std::string input;
    do{
        std::cout << "[ Set The Hit Point For "<< std::setw(10) << this->Name <<"    Please  ] : ";
        getline(std::cin, input);
    }
    while (FtAtoi(input) == 0);  
    this->HitPoint = FtAtoi(input);
}

void ClapTrap::setAttackDamage(void)
{
    std::string input;
    do{
        std::cout << "[ Set The Attack Damage For "<< std::setw(10) << this->Name <<" Please ] : ";
        getline(std::cin, input);
    }
    while (FtAtoi(input) == 0);  
    this->AttackDamage = FtAtoi(input);
}

void ClapTrap::setEnergyPoint(void)
{
    std::string input;
    do{
        std::cout << "[ Set The Energy Point For "<< std::setw(10) << this->Name <<"  Please ] : ";
        getline(std::cin, input);
    }
    while (FtAtoi(input) == 0);  
    this->EnergyPoint = FtAtoi(input);
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