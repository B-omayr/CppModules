/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:22:01 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/24 12:00:08 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    private:

        Weapon      &_weapon;
        std::string name;

    public:

        HumanA(std::string name, Weapon &_weapon);
        void attack(void); 
        ~HumanA();
        
};

#endif