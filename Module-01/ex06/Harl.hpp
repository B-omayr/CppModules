/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:38:23 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/25 16:02:08 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl {
    private:
    
        std::string level[4];
        void        debug(void);
        void        info(void);
        void        warning(void);
        void        error(void);

    public:

        Harl(void);
        ~Harl();
        void        complain(std::string level);
        void        filter(int i);
};

#endif