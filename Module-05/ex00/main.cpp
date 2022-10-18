/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:42:12 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/18 09:08:13 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "\033[1;33m--------------First Test---------------\033[0;m" << std::endl;
	try{
		Bureaucrat obj1("ibra", 0);
		if (obj1.getGrade() < 1)
			throw obj1.GtH;
		else if (obj1.getGrade() > 150)
			throw obj1.GtL;
		std::cout << "This is a valid range" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\033[1;33m--------------Second Test---------------\033[0;m" << std::endl;
	try{
		Bureaucrat obj1("omayr", 4);
		obj1.increaseGrade();	
		std::cout << obj1 << std::endl;
		obj1.increaseGrade();	
		std::cout << obj1 << std::endl;
		obj1.increaseGrade();
		std::cout << obj1 << std::endl;
		obj1.decreaseGrade();
		std::cout << obj1 << std::endl;
		std::cout << "This is a valid range" << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	};
}