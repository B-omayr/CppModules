/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:46:35 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/20 09:18:13 by ibra             ###   ########.fr       */
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
        unsigned int		grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string n, unsigned int g);
		Bureaucrat(const Bureaucrat &oldOne);
		Bureaucrat &operator = (const Bureaucrat &input);
		~Bureaucrat();

		std::string		getName() const;
		unsigned int	getGrade() const;

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