/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:49:00 by ibra              #+#    #+#             */
/*   Updated: 2022/10/15 11:27:58 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain *brain;
    public:
        Cat();
        Cat(Brain *brain);
        Cat(const Cat &oldOne);
        Cat &operator = (const Cat &Input);
        ~Cat();

        void    makeSound();
        Brain   *getBrain() const;
};

#endif