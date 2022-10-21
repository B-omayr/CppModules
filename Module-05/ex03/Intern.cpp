/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:15:08 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/21 11:18:38 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "\033[1;32mIntern Default Constructor Called\033[0;m" << std::endl;
}

Intern::Intern(const Intern &oldOne)
{
    std::cout << "\033[1;32mIntern Copy Constructor Called\033[0;m" << std::endl;
    *this = oldOne;
}

Intern &Intern::operator = (const Intern &Input)
{
    std::cout << "\033[1;32mIntern Copy Constructor Called\033[0;m" << std::endl;
    (void)Input;
    return *this;
}

Intern::~Intern()
{
    std::cout << "\033[1;31mIntern Destructor Called\033[0;m" << std::endl;
}

Form *Intern::makeForm(std::string formName, std::string target)
{
    Form *F[3] = { new ShrubberyCreationForm(target),
                new PresidentialPardonForm (target),
                new RobotomyRequestForm (target)};
    std::string choice[3] = { "shrubbery request",
                        "presidential request",
                        "robotomy request"};
    for (int i = 0; i < 3; i++)
    {
        if (choice[i] == formName)
        {
            for (int j = 0; j < 3; j++)
                if (i != j)
                    delete F[j];
            std::cout << "\033[1;36mIntern creates "<< formName << "\033[0;m" << std::endl;
            return F[i];
        }
    }
    for (int i = 0; i < 3; i++)
        delete F[i];
    std::cout << "\033[1;36mIntern cannot find a Form with this Name \033[0;m"<< "\"" + formName + "\"" << std::endl;
    return 0;
}

