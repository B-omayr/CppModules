/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:53:12 by ibra              #+#    #+#             */
/*   Updated: 2022/10/13 18:54:27 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *meta = new Animal();
    Animal *D = new Dog();
    Animal *C = new Cat();

    std::cout << D->getType() << " " << std::endl;
    std::cout << C->getType() << " " << std::endl;
    D->makeSound();
    C->makeSound();
    meta->makeSound();

    delete meta;
    delete D;
    delete C;
    
    std::cout << std::string(30, '-') << "\033[1;33mTest WrongAnimal Bellow\033[0;m" << std::endl << std::endl;
    
    WrongAnimal *metaa = new WrongAnimal();
    WrongAnimal *Ca = new WrongCat();

    std::cout << Ca->getType() << " " << std::endl;
    Ca->makeSound();
    metaa->makeSound();

    delete metaa;
    delete Ca;  
}



