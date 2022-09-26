/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 09:49:05 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/26 18:13:40 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
}

HumanB::HumanB(std::string name)
{
    this->_weapon = NULL;
    this->name = name;
}

void HumanB::attack(void)
{
    if (this->_weapon)
        std::cout << this->name << "  attacks with their  " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}