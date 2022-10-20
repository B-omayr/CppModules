/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:19:30 by ibra              #+#    #+#             */
/*   Updated: 2022/10/20 14:32:35 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &oldOne);
        PresidentialPardonForm &operator = (const PresidentialPardonForm &Input);
        ~PresidentialPardonForm();

        bool valid(const Bureaucrat &executor) const;
        void execute(Bureaucrat const &executor) const;

        std::string getTarget() const;
};

#endif