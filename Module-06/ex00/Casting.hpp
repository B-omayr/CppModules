/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casting.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:36:30 by ibra              #+#    #+#             */
/*   Updated: 2022/10/27 18:50:27 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTING_HPP
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
		bool		itNotCast;
        e_type		type;
        
    public:
        Casting();
        Casting(const Casting &oldOne);
        Casting &operator = (const Casting &Input);
        ~Casting();
        
        void	setInput(char *str);
		bool	checkIfItCast(void);
        
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

        void    printChar() const;
        void    printInt() const;
        void    printFloat() const;
        void    printDouble() const;
};

std::ostream &operator << (std::ostream &os, const Casting &B);

#endif