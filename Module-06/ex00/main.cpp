/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 09:28:04 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/25 15:50:42 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Casting.hpp"

int main(int ac, char **av)
{
    try{
        if (ac != 2)
            throw "Exception : Invalid Argument!!!";
        else
        {
           Casting c;
		   c.setInput(av[1]);
		   c.detectType();
		   c.convert();
        }        
    }
    catch(char const *str){
        std::cout << REDthrow << str << DESTROYCOLOR << std::endl;
    }
}