/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:46:35 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/16 17:51:56 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

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
};

#endif