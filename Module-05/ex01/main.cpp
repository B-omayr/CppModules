/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:42:12 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/19 16:59:22 by ibra             ###   ########.fr       */
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
		Bureaucrat obj1("ibra", 3);
		Form obj2("omayr", 0, 10, 4);

		obj1.signForm(obj2);
		obj2.beSigned(obj1);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "\033[1;33m--------------Second Test--------------\033[0;m" << std::endl;
	try{
		Bureaucrat obj1("ibra", 10);
		Form obj2("omayr", 0, 7, 33);

		obj2.beSigned(obj1);
		obj1.signForm(obj2);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}
	