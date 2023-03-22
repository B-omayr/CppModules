/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:42:39 by ibra              #+#    #+#             */
/*   Updated: 2023/03/22 11:01:13 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    Rpn obj;
    try{
        if (ac != 2)
            throw std::runtime_error("Error: Bad Argument");
        obj.exec(av[1]);
    }
    catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }
}