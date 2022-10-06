/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:40:15 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/06 08:40:17 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    private:
    
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        
	    void attack(const std::string &target);
        void guardGate();
};

#endif