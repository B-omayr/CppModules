/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:45:53 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/13 18:17:46 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <iomanip>
#include <string>

class ClapTrap
{
private:
	std::string Name;
	unsigned int HitPoint;
	unsigned int EnergyPoint;
	unsigned int AttackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &oldOne);
	ClapTrap &operator=(const ClapTrap &Input);
	~ClapTrap();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName() const;
	unsigned int getHP() const;
	unsigned int getEP() const;
	unsigned int getAD() const;
};

int FtAtoi(std::string s);

#endif