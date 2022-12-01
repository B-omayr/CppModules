/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:58:11 by iomayr            #+#    #+#             */
/*   Updated: 2022/12/01 14:06:33 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T> {
    public:
        MutantStack() {}
        MutantStack(const MutantStack &oldOne) {
            *this = oldOne;
        }
        MutantStack &operator=(const MutantStack &Input) {
            if (*this != Input)
                *this = Input;
            return (*this);
        }
        ~MutantStack() {}
        
        typedef typename Container::iterator iterator;
        iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};

#endif