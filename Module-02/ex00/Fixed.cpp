/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:25:26 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/30 16:32:58 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->FixPn = 0;
}

Fixed::Fixed(Fixed &oldOne)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = oldOne;
}

Fixed &Fixed::operator = (Fixed &Input)
{
	if (this != &Input)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->FixPn = Input.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->FixPn);
}

void Fixed::setRawBits(int const raw)
{
	this->FixPn = raw;
}