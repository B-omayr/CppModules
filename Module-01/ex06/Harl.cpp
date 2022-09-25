/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:38:52 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/25 16:11:50 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    level[0] = "DEBUG";
    level[1] = "INFO";
    level[2] = "WARNING";
    level[3] = "ERROR";
}

Harl::~Harl()
{
    std::cout << "\033[1;33mObj was destroyed\033[0;m" << std::endl;
}

void Harl::debug(void)
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    this->info();
}

void Harl::info(void)
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    this->warning();
}

void Harl::warning(void)
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month." << std::endl;
    this->error();
}

void Harl::error(void)
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::filter(int i)
{
    switch (i)
    {
        case 0:
            this->debug();
            break;
        case 1:
            this->info();
            break;
        case 2:
            this->warning();
            break;
        case 3:
            this->error();
            break;
        default:
            std::cout << "\033[1;31mThis Lever isn't exist\033[0;m" << std::endl;
    }
}

void Harl::complain(std::string level)
{
    int i;
   
    i = -1;
    while (++i < 4)
    {
        if (level == this->level[i])
            break;
    }
    filter(i);
}
