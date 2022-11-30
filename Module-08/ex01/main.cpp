/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:47:41 by iomayr            #+#    #+#             */
/*   Updated: 2022/11/30 15:45:41 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::cout << "\033[1;32m------>First Test\033[0;m" << std::endl;
    try{
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest Span : "<< sp.shortestSpan() << std::endl;
        std::cout << "Longest Span  : " << sp.longestSpan() << std::endl;
    }
    catch(const char *msg){
        std::cout << "\033[1;31m" << msg << "\033[0;m" << std::endl;
    }
    
    std::cout << "\033[1;32m------>Second Test\033[0;m" << std::endl;
    try{
        Span sp = Span(3);
        sp.addNumber(6);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const char *msg){
        std::cout << "\033[1;31m" << msg << "\033[0;m" << std::endl;
    }
    
    std::cout << "\033[1;32m------>third Test\033[0;m" << std::endl;
    try{
        std::vector<int> vec;
        Span sp(1e5);
        
        for (int i = 0; i < 1e5; i++){
            vec.push_back(i + 10);
        }
        sp.insert(vec.begin(), vec.end());
        std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span  : " << sp.longestSpan() << std::endl;
    }
    catch(const char *msg){
        std::cout << msg << std::endl;
    }
    
    std::cout << "\033[1;32m------>Fourth Test\033[0;m" << std::endl;
    try{
        Span sp = Span(3);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const char *msg){
        std::cout << "\033[1;31m" << msg << "\033[0;m" << std::endl;
    }
}