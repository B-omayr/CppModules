/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:26:06 by ibra              #+#    #+#             */
/*   Updated: 2022/10/20 10:45:09 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
    private:
        std::string target;
    
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &oldOne);
        ShrubberyCreationForm &operator = (const ShrubberyCreationForm &Input);
        ~ShrubberyCreationForm();

        void execute(Bureaucrat const & executor) const;
		bool valid(const Bureaucrat & executor) const;
        std::string getTarget() const;
};

#endif