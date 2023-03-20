/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:33:34 by iomayr            #+#    #+#             */
/*   Updated: 2023/03/20 17:20:16 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    (void)av;
    BitcoinExchange btcExchange;
    std::ifstream   dataFile;
    std::ifstream   inputFile;
    
    
    try{
        if (ac != 2)
            throw std::runtime_error("\033[1;31mBad Argument\033[0;m");
        dataFile.open("data.csv");
        if (!dataFile.good())
            throw std::runtime_error("\033[1;31mAn error occurred during read of Data File.\033[0;m");
        inputFile.open(av[1]);
        if (!inputFile.good())
            throw std::runtime_error("\033[1;31mAn error occurred during read of Input File.\033[0;m");
        btcExchange.exchangeBtc(dataFile, inputFile);
    }
    catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }
}