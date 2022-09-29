/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:11:39 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/29 18:55:11 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
    private:
	
        static const int	NbPnFract = 8;
        int					FixPnNb;
    
	public:

        Fixed();
        Fixed(Fixed &oldOne);
        ~Fixed();
    
        // Fixed	&operator = (Fixed &Input);
        int		getRawBits(void) const;
        void	setRawBits(int const raw);
};

#endif