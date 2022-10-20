/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:45:27 by ibra              #+#    #+#             */
/*   Updated: 2022/10/20 13:40:34 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 0, 145, 137)
{
    std::cout << "\033[1;32mDefault constructor Called for Shrubbery\033[0;m" << std::endl;
    this->target = "Unnamed";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : Form("ShrubberyCreationForm", 0, 145, 137)
{
    std::cout << "\033[1;32mParameterized Constructor Called for Shrubbery\033[0;m" << std::endl;
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &oldOne)
{
    std::cout << "\033[1;32mCopy Constructor Called for Shrubbery\033[0;m" << std::endl;
    *this = oldOne;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &Input)
{
    std::cout << "\033[1;32mCopy Assignement Opearator Called for Shrubbery\033[0;m" << std::endl;
    (void)Input;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "\033[1;31mDestructor Called for Shrubbery\033[0;m" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->target;
}

bool ShrubberyCreationForm::valid(const Bureaucrat &executor) const
{
    if (executor.getGrade() > this->getGradExec())
        throw Form::GradeTooLowException();
    else if (!this->getIsSigned())
        throw Form::FormNotSignedException();
    return true;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (this->valid(executor))
    {
        std::ofstream myfile;
        myfile.open(this->target + "_shrubbery");
        myfile << 
        "         v" << std::endl <<
			"        >X<" << std::endl <<
			"         A" << std::endl <<
			"        d$b" << std::endl <<
			"      .d\\$$b." << std::endl <<
			"    .d$i$$\\$$b." << std::endl <<
			"       d$$@b" << std::endl <<
			"      d\\$$$ib" << std::endl <<
			"    .d$$$\\$$$b" << std::endl <<
			"  .d$$@$$$$\\$$ib." << std::endl <<
			"      d$$i$$b" << std::endl <<
			"     d\\$$$$@$b" << std::endl <<
			"  .d$@$$\\$$$$$@b." << std::endl <<
			".d$$$$i$$$\\$$$$$$b." << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
		std::endl;
        std::cout << "\033[1;36m$> Tree created in " << this->target << "_shrubbery <$\033[0;m" << std::endl;
        myfile.close();
    }
}