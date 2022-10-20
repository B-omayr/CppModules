/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:42:12 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/20 18:19:07 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	std::cout << "\033[1;33m-------------First Test--------------" << std::endl;
	try{
		Bureaucrat obj1("ibra", 1);
		ShrubberyCreationForm obj2("Form");
		
		obj2.beSigned(obj1);
		obj2.execute(obj1);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "\033[1;33m-------------Second Test--------------" << std::endl;
	try{
		Bureaucrat obj1("ibra", 2);
		PresidentialPardonForm obj2("Omayr");

		obj2.beSigned(obj1);
		obj2.execute(obj1);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "\033[1;33m-------------Third Test--------------" << std::endl;
	try{
		Bureaucrat obj1("ibra", 3);
		RobotomyRequestForm obj2("omayr");		

		obj1.executeForm(obj2);
		obj2.beSigned(obj1);
		obj2.execute(obj1);
		obj2.execute(obj1);
		obj2.execute(obj1);
		obj1.executeForm(obj2);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

	