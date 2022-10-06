/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:42:45 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/06 09:10:23 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap : public ClapTrap {
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();

        void attack(const std::string &target);
        void highFivesGuys(void);
};

#endif