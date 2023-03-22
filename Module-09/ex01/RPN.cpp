/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:39:08 by ibra              #+#    #+#             */
/*   Updated: 2023/03/22 10:59:00 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Rpn::Rpn(){
    //Xx
}

Rpn::Rpn(const Rpn &copy){
    *this = copy;
}

Rpn &Rpn::operator = (const Rpn &Input)
{
    if (this != &Input){
        this->myStack = Input.myStack;
    }
    return *this;
}

Rpn::~Rpn(){
    //Xx
}

void checkValidChar(char c)
{
    if (!isdigit(c) && c != '*' && c != '+' && c != '-' && c != '/')
        throw std::runtime_error("Error: Invalid character");
}

int division(int num1, int num2)
{
    int val;
    
    if (num2 == 0)
        throw std::runtime_error("Error: Division by 0");
    val = num1 / num2;
    return val;
}

void Rpn::operation(char oper)
{
    int num1;
    int num2;
    int val;

    if (myStack.size() >= 2)
    {
        num2 = myStack.top();
        myStack.pop();
        num1 = myStack.top();
        myStack.pop();
        if (oper == '+')
            val = num1 + num2;
        else if (oper == '-')
            val = num1 - num2;
        else if (oper == '*')
            val = num1 * num2;
        else
            val = division(num1, num2);
    }
    myStack.push(val);
}

void Rpn::exec(std::string buffer)
{
    for (int i = 0; buffer[i]; i++)
    {
        if(buffer[i] != ' '){
            checkValidChar(buffer[i]);
            if (buffer[i] == '+'){
                operation('+');
            }
            else if (buffer[i] == '-'){
                operation('-');
            }
            else if (buffer[i] == '*'){
                operation('*');                
            }
            else if (buffer[i] == '/'){
                operation('/');
            }
            else{
                myStack.push(buffer[i] - 48);
            }
        }
    }
    if (myStack.size() > 1)
        throw std::runtime_error("Error: Size of Stack");
    std::cout << myStack.top() << std::endl;
}