/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:24:21 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/28 08:58:33 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return (NULL);
    Zombie *_zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        _zombies[i].SetName(name);
    return (_zombies);
}