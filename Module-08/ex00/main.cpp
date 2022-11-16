/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:53:54 by iomayr            #+#    #+#             */
/*   Updated: 2022/11/16 17:23:11 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try{
        std::vector <int> vec;
        for (int i = 0; i < 10; i++)
            vec.push_back(i * 10);
        easyfind(vec, 90);
        for (size_t i = 0; i < vec.size(); i++)
            std::cout << vec.at(i) << std::endl;
        vec.pop_back();
        easyfind(vec, 90);
    }
    catch(const char *msg){
        std::cout << msg << std::endl;
    }
}