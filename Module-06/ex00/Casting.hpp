/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casting.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:36:30 by ibra              #+#    #+#             */
/*   Updated: 2022/10/25 16:30:06 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CATSING_HPP
# define CASTING_HPP

#include <iostream>
#include <string>

#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define REDthrow "\033[7;31m"
#define DESTROYCOLOR "\033[0;m"

enum e_type {
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    PSEUDO
};

class Casting {
    private:
        std::string	Input;
        char		charValue;
        int			intValue;
        float		floatValue;
        double		doubleValue;
        e_type		type;
        
    public:
        Casting();
        Casting(const Casting &oldOne);
        Casting &operator = (const Casting &Input);
        ~Casting();
        
        void	setInput(char *str);
        
        void	detectType();
        bool	isFloat(void);
        bool	isChar(void);
        bool	isDouble(void);
        bool	isInt(void);
        bool	isPseudo(void);

        void	convert(void);
		void	cToOther(void);
		void	iToOther(void);
		void	dToOther(void);
		void	fToOther(void);
};

#endif