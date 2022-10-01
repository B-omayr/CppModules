/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:04:54 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/01 18:32:11 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
    private:
	
        static const int	NbPnFract = 8;
        int		        FixPn;
    
	public:

        Fixed();
        Fixed(const int Num);
        Fixed(const float Num);
        Fixed(Fixed &oldOne);
        Fixed	& operator = (const Fixed &Input);
        ~Fixed();
    
        float   toFloat(void) const;
        int     toInt(void) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        bool operator > (const Fixed &Sec) ;
        bool operator < (const Fixed &Sec) ;
        bool operator >= (const Fixed &Sec);
        bool operator <= (const Fixed &Sec);
        bool operator == (const Fixed &Sec);
        bool operator != (const Fixed &Sec);

        int operator + (const Fixed &Sec);
        int operator - (const Fixed &Sec);
        float operator * (const Fixed &Sec);
        float operator / (const Fixed &Sec);

        Fixed operator ++ ();
        Fixed operator ++ (int);
        Fixed operator -- ();
        Fixed operator -- (int);

        static Fixed &min(Fixed &Fir, Fixed &Sec);
        static const Fixed &min(const Fixed &Fir, const Fixed &Sec);
        static Fixed &max(Fixed &Fir, Fixed &Sec);
        static const Fixed &max(const Fixed &Fir, const Fixed &Sec);
};

std::ostream & operator << (std::ostream &output, const Fixed &obj);

#endif