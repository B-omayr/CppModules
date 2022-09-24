/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 09:41:39 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/24 13:22:10 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    std::cout << "Undefined Weapon was created" << std::endl;
}

Weapon::Weapon(std::string type)
{
    this->type = type;
    std::cout << this->type << " \033[1;32mWeapon was created\033[0;m" << std::endl;
}

Weapon::~Weapon(void)
{
    return ;
}

const std::string& Weapon::getType(void)
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}