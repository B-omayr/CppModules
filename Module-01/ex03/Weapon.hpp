/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:15:07 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/24 12:35:21 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
    private:

        std::string type;

    public:

        Weapon(void);
        Weapon(std::string type);
        const std::string& getType(void);
        void               setType(std::string type);
        ~Weapon();
};

#endif