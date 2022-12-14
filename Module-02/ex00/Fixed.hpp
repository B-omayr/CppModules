/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:11:39 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/30 08:35:40 by iomayr           ###   ########.fr       */
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
        Fixed(Fixed &oldOne);
        ~Fixed();
    
        Fixed	&operator = (Fixed &Input);
        int	getRawBits(void) const;
        void	setRawBits(int const raw);
};

#endif