/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:42:12 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/21 15:07:55 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	try{
		Intern someRandomIntern;
		Intern someRandomIntern1;
		Form* rrf;
		Form* rrrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrrf = someRandomIntern1.makeForm("robotmy request", "Ibra");
		delete rrf;
		delete rrrf;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}
	