/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:58:25 by ibra              #+#    #+#             */
/*   Updated: 2022/10/09 08:35:08 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string type;
    public:
    
        Animal();
        Animal(Animal &oldOne);
        Animal &operator = (Animal &Input);
        virtual ~Animal();
        
        std::string getType();
        void        setType(std::string type);
        virtual void makeSound();
        
};


#endif