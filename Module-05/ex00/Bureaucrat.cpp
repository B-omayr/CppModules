/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:53:29 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/16 18:06:33 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Unnamed bureaucrat was created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, unsigned int g) : name(n)
{
    this->grade = g;
    std::cout << "\033[0;32mBureaucrat "  << this->name << " was Created\033[0;m" << std::endl; 
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "\033[0;31mBureaucrat " << this->name << " was Destroyed\033[0;m" << std::endl;
}