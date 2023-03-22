/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:42:09 by ibra              #+#    #+#             */
/*   Updated: 2023/03/22 10:59:24 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>

class Rpn{
    
    private:
        std::stack<int> myStack;
    public:
        Rpn();
        Rpn(const Rpn &copy);
        Rpn &operator = (const Rpn &Input);
        ~Rpn();

        void exec(std::string buffer);
        void operation(char oper);
              
};

#endif