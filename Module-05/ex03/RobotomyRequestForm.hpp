/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:01:31 by ibra              #+#    #+#             */
/*   Updated: 2022/10/20 16:36:38 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
    private:
        std::string target;
    
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &oldOne);
        RobotomyRequestForm &operator = (const RobotomyRequestForm &Input);
        ~RobotomyRequestForm();

        void execute(Bureaucrat const & executor) const;
		bool valid(const Bureaucrat & executor) const;
        std::string getTarget() const;   
};

#endif