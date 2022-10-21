/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 08:15:11 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/21 10:56:34 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"

class Intern {
    public:
        Intern();
        Intern(const Intern &oldOne);
        Intern &operator = (const Intern &Input);
        ~Intern();

        Form *makeForm(std::string formName, std::string target);
};

#endif