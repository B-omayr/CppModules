/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:43:08 by ibra              #+#    #+#             */
/*   Updated: 2022/10/16 15:02:55 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain *brain;
    public:
        Dog();
        Dog(Brain *brain);
        Dog(const Dog &oldOne);
        Dog &operator = (const Dog &Input);
        ~Dog();

        void    makeSound() const;
        Brain   *getBrain() const;
};

#endif