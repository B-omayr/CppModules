/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:29:35 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/28 08:58:57 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::SetName(std::string name)
{
    this->name = name;
    std::cout << "Zombie name set to " << name << std::endl;
}

Zombie::Zombie(void)
{
    std::cout << "Unnamed Zombie was created" << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie " << name << " Was Created Succefuly" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->name << " is dead" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

