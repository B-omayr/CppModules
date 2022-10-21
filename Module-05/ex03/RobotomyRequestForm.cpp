/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:01:28 by ibra              #+#    #+#             */
/*   Updated: 2022/10/20 17:47:22 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 0, 72, 45)
{
    std::cout << "\033[1;32mDefault constructor Called for Robotomy\033[0;m" << std::endl;
    this->target = "Unnamed";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : Form("RobotomyRequestForm", 0, 72, 45)
{
    std::cout << "\033[1;32mParameterized Constructor Called for Robotomy\033[0;m" << std::endl;
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &oldOne)
{
    std::cout << "\033[1;32mCopy Constructor Called for Robotomy\033[0;m" << std::endl;
    *this = oldOne;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &Input)
{
    std::cout << "\033[1;32mCopy Assignement Opearator Called for Robotomy\033[0;m" << std::endl;
    (void)Input;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "\033[1;31mDestructor Called for Robotomy\033[0;m" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->target;
}

bool RobotomyRequestForm::valid(const Bureaucrat &executor) const
{
    if (executor.getGrade() > this->getGradExec())
        throw Form::GradeTooLowException();
    else if (!this->getIsSigned())
        throw Form::FormNotSignedException();
    return true;
}

int static robot_fail;

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->valid(executor))
    {
        if (robot_fail++ % 2 == 0)
            std::cout << this->target << " \033[1;36m>>>>>> has been robotomized Successefully\033[0;m"<< std::endl;
        else
            std::cout << "\033[1;36m>>>>>>>> Robotomy Failed\033[0;m"<< std::endl;
    }
}