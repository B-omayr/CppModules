/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:28:35 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/30 17:17:44 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->FixPn = 0;
}

Fixed::Fixed(const int Num)
{
	std::cout << "Default constructor called" << std::endl;
	this->FixPn = Num * (1 << this->NbPnFract);
}

Fixed::Fixed(const float Num)
{
	std::cout << "Default constructor called" << std::endl;
	this->FixPn = Num * (1 << this->NbPnFract);
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

int Fixed::toInt(void) const
{
    return (this->FixPn / (1 << this->NbPnFract));    
}

float Fixed::toFloat(void) const
{
    return ((double)this->FixPn / (double)(1 << this->NbPnFract));
}

std::ostream & operator<<(std::ostream &out, const Fixed &oldOne){
	out << oldOne.toFloat();
	return out;
}