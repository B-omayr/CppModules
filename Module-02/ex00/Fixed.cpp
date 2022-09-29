/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:25:26 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/29 18:54:57 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->FixPnNb = 1;
}

Fixed::Fixed(Fixed &oldOne)
{
	std::cout << "Copy constructor called " << std::endl;
	// this->FixPnNb = oldOne.FixPnNb;
	*this = oldOne;
}

// Fixed &Fixed::operator = (Fixed &Input)
// {
// 	std::cout << "Copy assignment operator called" << std::endl;
// 	this->FixPnNb = Input.getRawBits();
// 	return *this;
// }

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->FixPnNb);
}

void Fixed::setRawBits(int const raw)
{
	this->FixPnNb = raw;
}

////////////////////////////////////////

// Fixed::Fixed(){
// 	std::cout << "\033[1m\033[32m" << "Default constructor called" << "\033[0m" << std::endl;
// 	this->n = 0;
// }

// Fixed::Fixed(const Fixed &F){
// 	std::cout << "\033[1m\033[32m" << "Copy constructor called" << "\033[0m" << std::endl;
// 	*this = F;
// }

// Fixed & Fixed::operator = (const Fixed &F){
// 	if (this != &F)
// 	{
// 		std::cout << "\033[1m\033[32m" << "Copy assignment constructor called" << "\033[0m" << std::endl;
// 		this->n = F.getRawBits();
// 	}
// 	return *this;
// }

// Fixed::~Fixed(){
// 	std::cout << "\033[1m\033[31m" << "Destructor called" << "\033[0m" << std::endl;
// }

// int Fixed::getRawBits() const {
// 	std::cout << "\033[1m\033[33m" << "getRawBits member function called" << "\033[0m" << std::endl;
// 	return this->n;
// }

// void Fixed::setRawBits(int const raw){
// 	this->n = raw;
// }