/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:59:42 by iomayr            #+#    #+#             */
/*   Updated: 2022/11/30 15:38:33 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span &oldOne) {
    *this = oldOne;
}

Span & Span::operator= (const Span &Input)
{
    if (this != &Input)
    {
        this->_N = Input.getNb();
        this->vect = Input.vect;
    }
    return *this;
}

unsigned int Span::getNb() const
{
   return this->_N; 
}

void Span::addNumber(int numToAdd)
{
    if (vect.size() == this->_N)
        throw "Span if Full";
    vect.push_back(numToAdd);
}

int Span::longestSpan()
{
    int max;
    int min;

    if (vect.size() < 2)
        throw "Span has less than 2 elements";
    max = *max_element(vect.begin(), vect.end());
    min = *min_element(vect.begin(), vect.end());
    return (max - min); 
}

int Span::shortestSpan()
{
	std::vector<int>::iterator it;
	std::vector<int> tmp = this->vect;
	int res = -1;
	
	if (vect.size() < 2)
        throw "Span has less than 2 elements";
	sort(tmp.begin(), tmp.end());
	for (it = tmp.begin(); it != tmp.end() - 1; it++){
		res = res > (*(it + 1) - *it) || res < 0 ? (*(it + 1) - *it) : res;
	}
	return res;
}

void Span::insert(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if ((unsigned int)vect.size() + begin - end > _N){
		throw "Span is Full";
	}
	while (begin != end){
		addNumber(*begin++);
	}
	
}

Span::~Span() {}