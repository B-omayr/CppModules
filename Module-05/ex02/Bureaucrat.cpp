/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:53:29 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/20 18:18:34 by ibra             ###   ########.fr       */
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

unsigned int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::increaseGrade()
{
    this->grade--;
    if (this->grade < 1)
        throw Bureaucrat::GtH;
}

void Bureaucrat::decreaseGrade()
{
    this->grade++;
    if (this->grade > 150)
        throw Bureaucrat::GtL;
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
                << F.getName() << " because grade is To Low" << "\033[0;m" << std::endl; 
        }
        else
            std::cout << "\033[1;36m" << this->name << " couldn't sign "
                << F.getName() << " because it's Already Signed" << "\033[0;m" << std::endl;
            
    }
}

void Bureaucrat::executeForm(Form const &form)
{
    if (this->getGrade() <= form.getGradExec() && form.getIsSigned())
        std::cout << "\033[1;36m" << this->getName() << " Execute \033[0;m" << form.getName() << std::endl;
    else
    {
        if (this->getGrade() > form.getGradExec())
            std::cout << "\033[1;36m" <<this->getName() << " couldn’t execute "
                << form.getName() << " because his grade is low\033[0;m" << std::endl;
        else if (!form.getIsSigned())
            std::cout << "\033[1;36m" <<this->name << " couldn’t execute "
                << form.getName() << " because it's not Signed\033[0;m" << std::endl;
    }
}

std::ostream & operator << (std::ostream &os, const Bureaucrat &B)
{
    os << B.getName() + ", bureaucrat grade " + std::to_string(B.getGrade());
    return os;
}