/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:04:57 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/25 09:11:56 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "\033[1;31mYou enter a wrong argument\n\033[0;m";
        return (1);
    }
    std::string fileName = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    ft_replace(fileName, s1, s2);
}
