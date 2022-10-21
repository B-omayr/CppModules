/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:25:04 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/21 18:04:04 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
    private:
        const std::string name;
        bool isSigned;
        const int gradSign;
        const int gradExec;
    public:
        Form();
		Form(std::string n, bool isSg, int gs, int gex);
        Form(const Form &oldOne);
        Form &operator = (const Form &Input);
        virtual ~Form();

		const std::string	getName() const;
        bool				getIsSigned() const;
        int			getGradSign() const;
        int			getGradExec() const;
        
		void beSigned(Bureaucrat &B);
		virtual void execute(Bureaucrat const & executor) const = 0;
		virtual bool valid(const Bureaucrat & executor) const = 0;
		
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};
		class FormNotSignedException : public std::exception {
			public:
				const char *what() const throw();
		};
};

std::ostream &operator << (std::ostream &os, const Form &F);

#endif