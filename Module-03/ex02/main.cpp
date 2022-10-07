/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:40:40 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/07 12:32:50 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void displayAttribute(ClapTrap &obj1, ScavTrap &obj2, FragTrap &obj3)
{
    std::cout << std::string(45, '-') << std::endl;
    std::cout << "|   Name   |    AD    |    HP    |    EP    |" << std::endl;
    std::cout << std::string(45, '-') << std::endl
                << "|";
    std::cout << std::setw(10) << obj1.getName() << std::setw(10) << obj1.getAD()
                << std::setw(10) << obj1.getHP() << std::setw(10) << obj1.getEP() << std::setw(4) << "|" << std::endl;
    std::cout << std::string(45, '-') << std::endl
                << "|";
    std::cout << std::setw(10) << obj2.getName() << std::setw(10) << obj2.getAD()
                << std::setw(10) << obj2.getHP() << std::setw(10) << obj2.getEP() << std::setw(4) << "|" << std::endl;
    std::cout << std::string(45, '-') << std::endl
                << "|";
    std::cout << std::setw(10) << obj3.getName() << std::setw(10) << obj3.getAD()
                << std::setw(10) << obj3.getHP() << std::setw(10) << obj3.getEP() << std::setw(4) << "|" << std::endl;
    std::cout << std::string(45, '-') << std::endl;
}

int main()
{
    ClapTrap obj1("Parent");
    ScavTrap obj2("child1");
    FragTrap obj3("child2");

    displayAttribute(obj1, obj2, obj3);
    obj1.attack(obj2.getName());
    obj2.takeDamage(obj1.getAD());
    displayAttribute(obj1, obj2, obj3);
    obj1.attack(obj3.getName());
    obj3.takeDamage(obj1.getAD());
    displayAttribute(obj1, obj2, obj3);
    obj2.attack(obj3.getName());
    obj3.takeDamage(obj2.getAD());
    displayAttribute(obj1, obj2, obj3);
    obj3.beRepaired(200);
    displayAttribute(obj1, obj2, obj3);
}