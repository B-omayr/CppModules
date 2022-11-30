/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:59:45 by iomayr            #+#    #+#             */
/*   Updated: 2022/11/30 14:57:02 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>

class Span{
	private:
		std::vector<int>	vect;
		unsigned int		_N;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &oldOne);
		Span & operator = (const Span &Input);
		~Span();

		unsigned int	getNb() const;
		void			addNumber(int numToAdd);
		int				shortestSpan();
		int				longestSpan();
		void			insert(std::vector<int>::iterator f, std::vector<int>::iterator l);
};


#endif