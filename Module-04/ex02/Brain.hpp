/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:36:10 by ibra              #+#    #+#             */
/*   Updated: 2022/10/14 11:06:30 by iomayr           ###   ########.fr       */
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

        void setIdeas(std::string idea);
        std::string getIdeas(int i) const;
};

#endif