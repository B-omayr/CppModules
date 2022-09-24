/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:33:48 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/24 15:32:59 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private:

        Weapon      *_weapon;
        std::string name;

    public:

        HumanB(std::string name);
        void attack(void);
        void setWeapon(Weapon &weapon);
};

#endif