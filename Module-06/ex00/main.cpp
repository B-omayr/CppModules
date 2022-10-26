/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 09:28:04 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/26 09:30:53 by iomayr           ###   ########.fr       */
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
           std::cout << c ;
        }        
    }
    catch(char const *str){
        std::cout << REDthrow << str << DESTROYCOLOR << std::endl;
    }
}