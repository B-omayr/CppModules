/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:42:39 by ibra              #+#    #+#             */
/*   Updated: 2023/03/21 09:20:37 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

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

void operation(std::stack<int> &myStack, char oper)
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

void RPN(std::string buffer)
{
    std::stack<int> myStack;

    for (int i = 0; buffer[i]; i++)
    {
        if(buffer[i] != ' '){
            checkValidChar(buffer[i]);
            if (buffer[i] == '+'){
                operation(myStack, '+');
            }
            else if (buffer[i] == '-'){
                operation(myStack, '-');
            }
            else if (buffer[i] == '*'){
                operation(myStack, '*');                
            }
            else if (buffer[i] == '/'){
                operation(myStack, '/');
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

int main(int ac, char **av)
{
    try{
        if (ac != 2)
            throw std::runtime_error("Error: Bad Argument");
        RPN(av[1]);
    }
    catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }
}