/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:32:41 by ibra              #+#    #+#             */
/*   Updated: 2022/10/11 14:04:12 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Cat obj1;
    Cat obj2 = obj1;

    // int N;

    // N = 4;
    // Animal *Animals[N];
    // for (int i = 0; i < N; i++)
    // {
    //     if (i < (N / 2))
    //         Animals[i] = new Cat();
    //     else
    //         Animals[i] = new Dog();
    // }
    // std::cout << std::string(40, '-') << std::endl;
    // for (int i = 0; i < N; i++)
    // {
    //     delete Animals[i];
    // }
    // std::cout << std::string(40, '-') << std::endl;
}
