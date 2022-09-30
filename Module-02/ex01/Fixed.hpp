/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:28:38 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/30 16:45:22 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
    private:
	
        static const int	NbPnFract = 8;
        int		        FixPn;
    
	public:

        Fixed();
        Fixed(const int Num);
        Fixed(const float Num);
        Fixed(Fixed &oldOne);
        Fixed	& operator = (Fixed &Input);
        ~Fixed();
    
        float   toFloat(void) const;
        int     toInt(void) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

std::ostream & operator<<(std::ostream &out, const Fixed &F);//this

#endif