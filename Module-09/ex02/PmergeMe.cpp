/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:37:22 by ibra              #+#    #+#             */
/*   Updated: 2023/03/23 16:54:11 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

Pmerge::Pmerge(){
    //Xx
}
Pmerge::Pmerge(const Pmerge &copy){
    *this = copy;
}
Pmerge &Pmerge::operator = (const Pmerge &Input)
{
    if (this != &Input)
    {
        this->v = Input.v;
        this->d = Input.d;
    }
    return *this;
}
Pmerge::~Pmerge(){
    //Xx
}

int checkGetValue(std::string arg)
{
    for (int i = 0; arg[i]; i++)
    {
        if (arg[i] < '0' && arg[i] > '9')
            throw std::runtime_error("Error");
    }
    return (std::stoi(arg));
}

void Pmerge::storeData(int ac, char **av)
{
    int num;
    
    for (int i = 1; i < ac; i++)
    {
        num = checkGetValue(av[i]);
        v.push_back(num);
        d.push_back(num);
    }
}

void Pmerge::sortData()
{
    std::cout << "Before : ";
    print();
    std::clock_t vstart = std::clock();
    //
}

void Pmerge::print()
{
    if (v.size() <= 5)
    {
        for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++){
            std::cout << *it << " ";
        }
        std::cout << std::endl;
    }
    else{
        for (std::vector<int>::iterator it = v.begin(); it != v.begin() + 5; it++){
            std::cout << *it << " ";
        }
        std::cout << "[...]" << std::endl;
    }
}