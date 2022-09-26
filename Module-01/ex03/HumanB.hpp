/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:33:48 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/26 18:13:23 by iomayr           ###   ########.fr       */
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

        HumanB(void);
        HumanB(std::string name);
        void attack(void);
        void setWeapon(Weapon &weapon);
};

#endif