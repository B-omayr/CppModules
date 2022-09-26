/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:54:17 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/26 16:30:34 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string name;
    
    public:

        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);
        
        void        randomChump(std::string name);
        void        announce(void);

};

Zombie      *newZombie(std::string name);

#endif