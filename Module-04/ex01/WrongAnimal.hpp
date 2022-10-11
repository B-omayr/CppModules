/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:39:27 by ibra              #+#    #+#             */
/*   Updated: 2022/10/07 17:53:26 by ibra             ###   ########.fr       */
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
        ~WrongAnimal();
        
        std::string getType();
        void        setType(std::string type);
       void makeSound();
        
};


#endif