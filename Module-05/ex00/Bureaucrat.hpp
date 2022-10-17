/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:46:35 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/17 13:57:44 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "exception"
#include "iostream"
#include "string"

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

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return "Grade is to High";
				}
		}GtH;

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return "Grade is to Low";
				}
		}GtL;
};

std::ostream &operator << (std::ostream &os, const Bureaucrat &B);

#endif