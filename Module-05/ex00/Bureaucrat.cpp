/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:53:29 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/21 17:53:55 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Unnamed bureaucrat was created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, unsigned int g) : name(n)
{
    std::cout << "\033[0;32mBureaucrat "  << this->name << " was Created\033[0;m" << std::endl; 
    this->grade = g;
    if (this->grade < 0)
        throw Bureaucrat::GradeTooHighException();
    else if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &oldOne)
{
    *this = oldOne;
    std::cout << "\033[1;32mBureaucrat Copy Construtor Called\033[0;m" << std::endl;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &Input)
{
    if (this != &Input)
    {
        std::cout << "\033[1;32mBureaucrat Copy assignement operator called\033[0;m" << std::endl;
        this->grade = Input.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "\033[0;31mBureaucrat " << this->name << " was Destroyed\033[0;m" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::increaseGrade()
{
    this->grade--;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decreaseGrade()
{
    this->grade++;
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is to High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is to Low";
}

std::ostream & operator << (std::ostream &os, const Bureaucrat &B)
{
    os << B.getName() + ", bureaucrat grade " + std::to_string(B.getGrade());
    return os;
}