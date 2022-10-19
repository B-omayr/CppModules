/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:42:12 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/19 10:45:02 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#include "iostream"
#include "string"

int main()
{
	std::cout << "\033[1;33m--------------First Test---------------\033[0;m" << std::endl;
	try{
		Bureaucrat obj1("ibra", 11);
		Form obj2("omayr", 0, 0, 10);
		
		if (obj1.getGrade() < 1)
			throw obj1.GtH;
		else if (obj1.getGrade() > 150)
			throw obj1.GtL;
		else if (obj2.getGradSign() < 1)
			throw obj2.GtL;
		else if (obj2.getGradSign() > 150)
			throw obj2.GtH;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\033[1;33m--------------Second Test---------------\033[0;m" << std::endl;
	try{
		Bureaucrat obj1("ibra", 3);
		Form obj2("omayr", 0, 10, 10);

		obj1.signForm(obj2);
		obj2.beSigned(obj1);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}
	