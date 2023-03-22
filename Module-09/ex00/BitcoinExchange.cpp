/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:33:27 by iomayr            #+#    #+#             */
/*   Updated: 2023/03/22 14:17:52 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(): month(0), year(0), day(0){
    //Xx
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy){
    *this = copy;
}
BitcoinExchange &BitcoinExchange::operator = (const BitcoinExchange &Input)
{
    if (this != &Input){
        this->day = Input.day;
        this->year = Input.year;
        this->month = Input.month;
        this->myMap = Input.myMap;
    }
    return *this;
}
BitcoinExchange::~BitcoinExchange(){
    //Xx
}

void BitcoinExchange::exchangeBtc(std::ifstream &dataFile, std::ifstream &InputFile)
{
    getData(dataFile, true);
    getData(InputFile, false);
}

void BitcoinExchange::getData(std::ifstream &file, bool dataOrInput)
{
    std::string line;
    int count = -1;

    while (getline(file, line))
    {
        count++;
        if (count == 0 || line.size() == 0)
            continue;
        execLine(line, dataOrInput);
        line.clear();
    }
}

void BitcoinExchange::checkTime(std::string time)
{
    int i = 0;
    
    while (time[i] && (time[i] == ' ' || time[i] == '\t'))
        i++;
    if (time[i + 4] != '-' || time[i + 7] != '-')
        throw std::runtime_error("Error: Bad Inupt => " + time);
    this->year = std::atoi(time.substr(i, 4).c_str());
    this->month = std::atoi(time.substr(i + 5, 2).c_str());
    this->day = std::atoi(time.substr(i + 8, 2).c_str());
    i += 10;
    while (time[i])
    {
        if (time[i] != ' ' && time[i] != '\t')
            throw std::runtime_error("Error: Bad Inupt => " + time); 
        i++;
    }
    if (year > 2023 || year < 2009 || month < 1 || month > 12 || day > 31 || day < 1)
        throw std::runtime_error("Error: Bad Inupt => " + time);
    if (day > 28 && month == 2)
        throw std::runtime_error("Error: Bad Inupt => " + time);
}

float BitcoinExchange::checkGetValue(std::string value)
{
    int countPoint = 0;
    int i = 0;

    while (value[i] && (value[i] == ' ' || value[i] == '\t'))
        i++;
    while (value[i])
    {
        if (value[i] == '.')
            countPoint++;
        else if (value[i] == '-')
            throw std::runtime_error("Error: Not a Positive Number"); 
        else if (value[i] < '0' && value[i] > '9')
            throw std::runtime_error("Error: Not a valid Number");
        i++;
    }
    if (countPoint > 1)
        throw std::runtime_error("Error: Not a valid Number");
    return (std::atof(value.c_str()));
}

void BitcoinExchange::execLine(std::string &line, bool dataOrInput)
{
    std::string time;
    std::string value;
    float       validValue;
    int         found;
    
    try{    
        if (dataOrInput)
            found = line.find(',');
        else
            found = line.find('|');
        time = line.substr(0, found);
        value = line.substr(found + 1);
        if (dataOrInput){
            checkTime(time);
            validValue = checkGetValue(value);
            myMap[time] = validValue;
        }
        else
        {
            checkTime(time);
            validValue = checkGetValue(value);
            if (validValue > 1000)
                throw std::runtime_error("Error: Too Large Number");
            else
                std::cout << time << " => " << validValue << " = " << this->myMap.lower_bound(time)->second * validValue << std::endl;
        }
    }
    catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }
}