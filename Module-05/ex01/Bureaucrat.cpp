/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:53:29 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/21 10:42:33 by iomayr           ###   ########.fr       */
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
    if (this->grade < 1)
        throw GradeTooHighException();
    else if (this->grade > 150)
        throw GradeTooLowException();
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

void Bureaucrat::signForm(Form &F) const
{
    if (this->grade <= F.getGradSign() &&  !F.getIsSigned())
        std::cout << "\033[1;36m" <<this->name << " signed " << F.getName() << "\033[0;m" << std::endl;
    else
    {
        if (this->getGrade() > F.getGradSign())
        {
            std::cout << "\033[1;36m" << this->name << " couldn't sign "
                << F.getName() << " because grade is To Low" << std::endl; 
        }
        else
            std::cout << "\033[1;36m" << this->name << " couldn't sign "
                << F.getName() << " because it's Already Signed" << std::endl;
            
    }
}

std::ostream & operator << (std::ostream &os, const Bureaucrat &B)
{
    os << B.getName() + ", bureaucrat grade " + std::to_string(B.getGrade());
    return os;
}