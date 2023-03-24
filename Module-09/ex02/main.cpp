/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:47:00 by ibra              #+#    #+#             */
/*   Updated: 2023/03/23 10:47:49 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    Pmerge obj;
    try{
        if (ac <= 1)
            throw std::runtime_error("Error: Bad Argument");
        obj.storeData(ac, av);
        obj.sortData();
    }
    catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }
}