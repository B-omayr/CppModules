/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:44:39 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/04 12:11:54 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


void displayAttribute(ClapTrap (&P)[2])
{
    std::cout << std::string(45, '-') << std::endl;
    std::cout << "|   Name   |    AD    |    HP    |    EP    |" << std::endl;   
    for (int i = 0; i < 2; i++)
    {
        std::cout << std::string(45, '-') << std::endl << "|";
        std::cout << std::setw(10) << P[i].getName() << std::setw(10) << P[i].getAD() \
             << std::setw(10) << P[i].getHP() << std::setw(10) << P[i].getEP() << std::setw(4) << "|" <<std::endl;
    }
    std::cout << std::string(45, '-') << std::endl;
}


void edditingClapTrap(ClapTrap (&P)[2])
{
   std::cout << "\033[1;33mPlease Modify The Attributes To Enjoy The Game 😊\033[0;m" << std::endl;
   for (int i = 0; i < 2; i++)
   {
        P[i].setHitPoint();
        P[i].setAttackDamage();
        P[i].setEnergyPoint();
   }
    displayAttribute(P);
    std::cout << "\033[1;32mAlright Now Let's Enjoy our Battle \033[0;m" << std::endl;
}

void letsPlay(ClapTrap (&P)[2])
{
    P[0].attack(P[1].getName());
    displayAttribute(P);
    P[1].takeDamage(P[0].getAD());
    displayAttribute(P);
    P[1].attack(P[0].getName());
    displayAttribute(P);
    P[0].takeDamage(P[1].getAD());
    displayAttribute(P);
    P[1].beRepaired(P[0].getAD());
    displayAttribute(P);
}

int main()
{
    ClapTrap P[2];
    std::string name;

    std::cout << "\033[1;33mWe Will play this Game with Two Player\033[0;m"<< std::endl;
    std::cout << "\033[1;31mCreate The Players Please\033[0;m" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        std::cout << "Give ClapTrap a Name : ";
        getline(std::cin, name);
        P[i] = ClapTrap(name);
    }
    edditingClapTrap(P);
    letsPlay(P);
}

