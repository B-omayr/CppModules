/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:36:12 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/19 15:38:59 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string SetUpperCase(std::string arg)
{
    for (int i = 0; i < (int) arg.length(); i++)
        arg[i] = toupper(arg[i]);
    return (arg);    
}

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl ;
    else
        for (int i = 1; i < ac ; i++)
            std::cout << SetUpperCase(av[i]);
    return (0);
}