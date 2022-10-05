/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:01:44 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/05 13:51:53 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void displayAttribute(ScavTrap (&P)[2])
{
    std::cout << std::string(45, '-') << std::endl;
    std::cout << "|   Name   |    AD    |    HP    |    EP    |" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        std::cout << std::string(45, '-') << std::endl
                  << "|";
        std::cout << std::setw(10) << P[i].getName() << std::setw(10) << P[i].getAD()
                  << std::setw(10) << P[i].getHP() << std::setw(10) << P[i].getEP() << std::setw(4) << "|" << std::endl;
    }
    std::cout << std::string(45, '-') << std::endl;
}

void letsPlay(ScavTrap (&P)[2])
{
    P[0].attack(P[1].getName());
    P[1].takeDamage(P[0].getAD());
    displayAttribute(P);
    P[1].attack(P[0].getName());
    P[0].takeDamage(P[1].getAD());
    displayAttribute(P);
    P[1].beRepaired(P[0].getAD());
    displayAttribute(P);
    P[1].attack(P[0].getName());
    P[0].takeDamage(P[1].getAD());
    displayAttribute(P);
}

int main()
{
    ScavTrap P[2];
    std::string name;

    std::cout << "\033[1;33mWe Will play this Game with Two Player\033[0;m" << std::endl;
    std::cout << "\033[1;31mCreate The Players Please\033[0;m" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        std::cout << "Give ScavTrap a Name : ";
        getline(std::cin, name);
        P[i] = ScavTrap(name);
    }
    letsPlay(P);
}


