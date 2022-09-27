/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 09:51:52 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/27 09:59:40 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), name(name)
{

}

HumanA::~HumanA()
{
    return ;
}

void HumanA::attack(void)
{
    std::cout << this->name << "  attacks with their  " << this->_weapon.getType() << std::endl;
}