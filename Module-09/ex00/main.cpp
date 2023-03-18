/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:33:34 by iomayr            #+#    #+#             */
/*   Updated: 2023/03/17 15:01:46 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    std::ifstream inputFile;
    if (ac != 2)
        std::cout << "\033[1;31mBad Argument\033[0;m" << std::endl;
    inputFile.open(av[1]);
    if (!inputFile.is_open() || !inputFile.good())
        std::cout << "\033[1;31mAn error occurred during read of this File.\033[0;m";
    else{
        
    }
}