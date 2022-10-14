/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:32:41 by ibra              #+#    #+#             */
/*   Updated: 2022/10/14 15:25:02 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    int N;

    N = 4;
    Animal *Animals[N];
    Brain *brainCat = new Brain;
    brainCat->setIdeas("I Love Fish ...");
    Brain *brainDog = new Brain;
    brainDog->setIdeas("I Want i Bitch(Female Dog)");
    for (int i = 0; i < N; i++)
    {
        if (i < (N / 2))
            Animals[i] = new Cat(brainCat);
        else
            Animals[i] = new Dog(brainDog);
    }
   
    std::cout << std::string(40, '-') << std::endl;
    for (int i = 0; i < N; i++)
    {
        delete Animals[i];
    }
    std::cout << std::string(40, '-') << std::endl;
    delete brainCat;
    delete brainDog;
    system("leaks fiiire");
}
