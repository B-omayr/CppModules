/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:44:39 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/03 18:58:58 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void edditingClapTrap(ClapTrap (&P)[2])
{
   std::cout << "Please Modify The Attributes To Enjoy The Game 😊" << std::endl;
   
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
        P[i - 1] = ClapTrap(name);
    }
    edditingClapTrap(P);
}

