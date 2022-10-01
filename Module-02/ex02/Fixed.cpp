/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:04:39 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/01 18:34:10 by iomayr           ###   ########.fr       */
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
	std::cout << "Int constructor called" << std::endl;
	this->FixPn = Num * (1 << this->NbPnFract);
}

Fixed::Fixed(const float Num)
{
	std::cout << "Float constructor called" << std::endl;
	this->FixPn = (int)(roundf(Num * (1 << this->NbPnFract)));
}

Fixed::Fixed(Fixed &oldOne)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = oldOne;
}

Fixed & Fixed::operator = (const Fixed &Input)
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
    return ((float)this->FixPn / (float)(1 << this->NbPnFract));
}

std::ostream & operator << (std::ostream &output, const Fixed &obj){
	output << obj.toFloat();
	return output;
}

/**************** Comparison *******************/

bool Fixed::operator > (const Fixed &Sec)
{
	return (this->FixPn > Sec.FixPn);
}

bool Fixed::operator < (const Fixed &Sec)
{
	return (this->FixPn < Sec.FixPn);
}

bool Fixed::operator >= (const Fixed &Sec)
{
	return (this->FixPn >= Sec.FixPn);
}

bool Fixed::operator <= (const Fixed &Sec)
{
	return (this->FixPn <= Sec.FixPn);
}

bool Fixed::operator == (const Fixed &Sec)
{
	return (this->FixPn == Sec.FixPn);
}

bool Fixed::operator != (const Fixed &Sec)
{
	return (this->FixPn != Sec.FixPn);
}

/***************** arithmetic ********************/

int Fixed::operator + (const Fixed &Sec)
{
	return (this->toInt() + Sec.toInt());
}

int Fixed::operator - (const Fixed &Sec)
{
	return (this->toInt() - Sec.toInt());
}

float Fixed::operator * (const Fixed &Sec)
{
	return (this->toFloat() * Sec.toFloat());
}

float Fixed::operator / (const Fixed &Sec)
{
	return (this->toFloat() / Sec.toFloat());
}

/*********** Increment && decrement ***************/

Fixed Fixed::operator ++ ()
{
	++this->FixPn;
	return *this;
}

Fixed Fixed::operator ++ (int)
{
	Fixed curr = *this;
	this->FixPn++;
	return curr;
}

Fixed Fixed::operator -- ()
{
	--this->FixPn;
	return *this;
}

Fixed Fixed::operator -- (int)
{
	Fixed curr = *this;
	this->FixPn--;
	return curr;
}

/********************* Functions *********************/

Fixed &Fixed::min(Fixed &Fir, Fixed &Sec)
{
	if (Fir > Sec)
		return Sec;
	return Fir;
}

Fixed &Fixed::max(Fixed &Fir, Fixed &Sec)
{
	if (Fir > Sec)
		return Fir;
	return Sec;
}


Fixed const & Fixed::min(const Fixed &Fir, const Fixed &Sec)
{
	if (Fir.FixPn < Sec.FixPn)
		return Fir;
	return Sec;
}
Fixed const & Fixed::max(const Fixed &Fir, const Fixed &Sec)
{
	if (Fir.FixPn < Sec.FixPn)
		return Sec;
	return Fir;
}