/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:19:25 by ibra              #+#    #+#             */
/*   Updated: 2022/10/20 14:26:59 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 0, 25, 5)
{
    std::cout << "\033[1;32mDefault constructor Called for Presidential\033[0;m" << std::endl;
    this->target = "Unnamed";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 0, 25, 5)
{
    std::cout << "\033[1;32mParameterized Constructor Called for Presidential\033[0;m" << std::endl;
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &oldOne)
{
    std::cout << "\033[1;32mCopy Constructor Called for Presidential\033[0;m" << std::endl;
    *this = oldOne;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &Input)
{
    std::cout << "\033[1;32mCopy Assignement Opearator Called for Presidential\033[0;m" << std::endl;
    (void)Input;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "\033[1;31mDestructor Called for Presidential\033[0;m" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
    return this->target;
}

bool PresidentialPardonForm::valid(const Bureaucrat &executor) const
{
    if (executor.getGrade() > this->getGradExec())
        throw Form::GradeTooLowException();
    else if (!this->getIsSigned())
        throw Form::FormNotSignedException();
    return true;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->valid(executor))
    {
        std::cout << this->target << "\033[1;36m >>>>> has been pardoned by Zaphod Beeblebrox\033[0;m" << std::endl;
    }
}