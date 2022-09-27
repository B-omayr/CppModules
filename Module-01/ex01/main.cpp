/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:36:29 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/27 16:27:22 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *_zombies = zombieHorde(10, "IBRA");
    for (int i = 0; i < 10; i++)
        std::cout << _zombies[i].announce() << std::endl;
    delete [] _zombies;
}