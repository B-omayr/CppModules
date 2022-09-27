/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:38:04 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/27 11:05:26 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *Zomb = newZombie("Alan");  
    Zombie *david = newZombie("David");

    david->announce();
    Zomb->announce();
    delete Zomb;
    delete david; 
}