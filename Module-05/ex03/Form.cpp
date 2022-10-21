/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:54:41 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/21 18:05:37 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Unnamed Form"), isSigned(false), gradSign(150), gradExec(150)
{
    std::cout << "\033[1;32mForm Default Constructor For Unnamed Form Called\033[0;m" << std::endl;
}

Form::Form(std::string n, bool isSg, int gs, int gex)
    : name(n), isSigned(isSg), gradSign(gs), gradExec(gex)
{
    std::cout << "\033[1;32mForm Parametrized Constructor For " << this->name << " Called\033[0;m" << std::endl;
    if (this->getGradSign() < 1 || this->getGradExec() < 1)
        throw GradeTooHighException();
    if (this->getGradSign() > 150 || this->getGradExec() > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &oldOne)
    : name(oldOne.name), gradSign(oldOne.gradSign), gradExec(oldOne.gradExec)  
{
    std::cout << "\033[1;32mForm Copy constructor Called\033[0;m" << std::endl;
    this->isSigned = oldOne.isSigned;
}

Form &Form::operator = (const Form &Input)
{
    std::cout << "\033[1;32mForm Copy Assignement Operator Called\033[0;m" << std::endl;
    if (this != &Input)
    {
        this->isSigned = Input.isSigned;
    }
    return *this;
}

Form::~Form()
{
    std::cout << "\033[1;31mForm " << this->name << " Destroyed\033[0;m" << std::endl;
}

const std::string Form::getName() const
{
    return this->name;
}

bool Form::getIsSigned() const
{
    return this->isSigned;
}

int Form::getGradSign() const
{
    return this->gradSign;
}

int Form::getGradExec() const
{
    return this->gradExec;
}

void Form::beSigned(Bureaucrat &B)
{
    if (this->getGradSign() < B.getGrade())
        throw Bureaucrat::GradeTooLowException();
    else if (!this->isSigned)
    {
        this->isSigned = true;
        std::cout << "\033[1;36m" << this->getName() << " Form was signed by " << B.getName() << "\033[0;m" << std::endl;
    }
    else
        std::cout << "\033[1;36m" << this->getName() << " Form already Signed" << "\033[0;m" << std::endl;
}

const char *Form::GradeTooHighException:: what() const throw()
{
	return "Form Grade is Too High Exception";
}

const char *Form::GradeTooLowException:: what() const throw()
{
	return "Form Grade is Too Low Exception";
}

const char *Form::FormNotSignedException:: what() const throw()
{
	return "Form Not Signed yet";
}

std::ostream &operator << (std::ostream &os, const Form &F)
{
    os << "\033[1;36mThis Form " << F.getName() << (F.getIsSigned() ? " it's Signed" : " it's Not Signed yet")
        <<" ,Form grade To sign it is " << F.getGradSign() << " ,Form grade To execute it is " 
        << F.getGradExec() << "\033[0;m";
    return os;
}