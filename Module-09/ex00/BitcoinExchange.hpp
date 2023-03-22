/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:33:31 by iomayr            #+#    #+#             */
/*   Updated: 2023/03/22 11:06:35 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>

class BitcoinExchange{
    
    private:
        int month;
        int year;
        int day;
        std::map<std::string, float, std::greater<std::string> > myMap;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange &operator = (const BitcoinExchange &Input);
        ~BitcoinExchange();
        void exchangeBtc(std::ifstream &dataFile, std::ifstream &inputFile);
        void getData(std::ifstream &file, bool dataOrInput);
        void execLine(std::string &line, bool dataOrInput);
        void addElement(std::string time, std::string value);
        void checkTime(std::string time);
        float checkGetValue(std::string value);
        int  getMonth(std::string strYear);
        int  getYear(std::string strYear);
        int  getDay(std::string strYear);
};

# endif