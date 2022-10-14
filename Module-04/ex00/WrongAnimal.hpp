/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:39:27 by ibra              #+#    #+#             */
/*   Updated: 2022/10/13 18:44:57 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
    protected:
        std::string type;
    public:
    
        WrongAnimal();
        WrongAnimal(WrongAnimal &oldOne);
        WrongAnimal &operator = (WrongAnimal &Input);
        virtual ~WrongAnimal();
        
        std::string getType();
        void        setType(std::string type);
       void makeSound();
        
};


#endif