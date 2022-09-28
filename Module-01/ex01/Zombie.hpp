/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:18:17 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/28 08:59:04 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
    private:
    
       std::string name;
        
    public:
    
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        
        void SetName(std::string name);
        void announce(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif