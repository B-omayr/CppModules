/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:36:10 by ibra              #+#    #+#             */
/*   Updated: 2022/10/10 13:17:59 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &oldOne);
        Brain &operator = (const Brain &Input);
        ~Brain();
};

#endif