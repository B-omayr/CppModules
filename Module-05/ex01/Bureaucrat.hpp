/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:46:35 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/21 10:41:56 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
class Form;

class Bureaucrat {
    private:
        const std::string	name;
        int		grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string n, unsigned int g);
		Bureaucrat(const Bureaucrat &oldOne);
		Bureaucrat &operator = (const Bureaucrat &input);
		~Bureaucrat();

		std::string		getName() const;
		int	getGrade() const;

		void increaseGrade();
		void decreaseGrade();
		void signForm(Form &F) const;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return "Bureaucrat Grade is to High";
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return "Bureaucrat Grade is to Low";
				}
		};
};

std::ostream &operator << (std::ostream &os, const Bureaucrat &B);

#endif