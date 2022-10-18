/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:54:41 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/18 17:21:06 by iomayr           ###   ########.fr       */
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

const int Form::getGradSign() const
{
    return this->gradSign;
}

const int Form::getGradExec() const
{
    return this->gradExec;
}

void Form::beSigned(Bureaucrat &B)
{
    if(B.getGrade() > this->getGradSign())
        throw Form::GtL;
    this->isSigned = true;
}