/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:46:35 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/21 10:41:17 by iomayr           ###   ########.fr       */
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

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw()
				{
					return "Grade is to High";
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw()
				{
					return "Grade is to Low";
				}
		};
};

std::ostream &operator << (std::ostream &os, const Bureaucrat &B);

#endif