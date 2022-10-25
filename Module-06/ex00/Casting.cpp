/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casting.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:36:33 by ibra              #+#    #+#             */
/*   Updated: 2022/10/25 16:33:37 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Casting.hpp"

/*-------------------Constructors-------------------*/

Casting::Casting()
{
    std::cout << GREEN "Default Constructor Called" DESTROYCOLOR << std::endl;
}

Casting::Casting(const Casting &oldOne)
{
    std::cout << GREEN "Copy Constructor Called" DESTROYCOLOR << std::endl;
    *this = oldOne;
}

Casting &Casting::operator = (const Casting &Input)
{
    std::cout << GREEN "Copy Assignement Operator Called" DESTROYCOLOR << std::endl;
    if (this != &Input)
    {
        this->intValue = Input.charValue;
    }
    return *this;
}

Casting::~Casting()
{
    std::cout << RED "Destructor Called" DESTROYCOLOR << std::endl;
}

/*-------------------Setter Functions--------------------*/

void Casting::setInput(char *str)
{
    this->Input = str;
}

/*-------------------Detecter Functions-------------------*/

bool Casting::isChar(void)
{
    if (this->Input.length() == 1 && isprint(this->Input[0]) && isalpha(this->Input[0]))
        return true;
    return false;
}

bool Casting::isInt(void)
{
    int i = 0;
    if (this->Input[i] == '-' || this->Input[i] == '+')
        i++;
    for (int j = i; j < this->Input.length(); j++)
    {
        if (!isdigit(this->Input[j]))
            return false;
        if (j == (this->Input.length() - 1))
            return true;
    }
    return 0;
}

bool Casting::isDouble(void)
{
    int i = 0;
    int cp = 0;
    if (this->Input.find('.') == std::string::npos
        || this->Input.find('.') == (this->Input.length() - 1))
        return false;
    if (this->Input[i] == '-' || this->Input[i] == '+')
        i++;
    for (int j = i; j < this->Input.length() - 1; j++)
    {
        if (this->Input[j] == '.')
            cp++;
        if (!isdigit(this->Input[j]) && this->Input[j] != '.' || cp > 1)
            return false;
    }
    return true;
}

bool Casting::isFloat(void)
{
    int i = 0;
    int cp = 0;
    if (this->Input.find('.') == std::string::npos || *this->Input.rbegin() != 'f'
        || this->Input.find('.') == (this->Input.length() - 2))
        return false;
    if (this->Input[i] == '-' || this->Input[i] == '+')
        i++;
    for (int j = i; j < this->Input.length() - 1; j++)
    {
        if (this->Input[j] == '.')
            cp++;
        if (!isdigit(this->Input[j]) && this->Input[j] != '.' || cp > 1)
            return false;
    }
    return true;
}

bool Casting::isPseudo(void)
{
    std::string P[8] = {
        "nan", "nanf",
        "inf", "inff",
        "+inf", "+inff",
        "-inff", "-inff"
    };
    for (int i = 0; i < 8; i++)
        if (P[i] == this->Input)
            return true;
    return false;
}

void Casting::detectType()
{
    if (isChar())
        this->type = CHAR;
    else if (isInt())
        this->type = INT;
    else if (isDouble())
        this->type = DOUBLE;
    else if (isFloat())
        this->type = FLOAT;
    else if (isPseudo())
        this->type = PSEUDO;
    else
       throw "this Input Has No Type";
}

/*-------------------Convertion Functions--------------------*/

void Casting::cToOther(void)
{
	this->intValue = static_cast<int>(this->charValue);
    this->doubleValue = static_cast<double>(this->charValue);
    this->floatValue = static_cast<float>(this->charValue);
}

void Casting::iToOther(void)
{
	this->charValue = static_cast<char>(this->intValue);
    this->doubleValue = static_cast<double>(this->intValue);
    this->floatValue = static_cast<float>(this->intValue);
}

void Casting::dToOther(void)
{
	this->charValue = static_cast<char>(this->doubleValue);
    this->intValue = static_cast<int>(this->doubleValue);
    this->floatValue = static_cast<float>(this->doubleValue);
}

void Casting::fToOther(void)
{
	this->charValue = static_cast<char>(this->floatValue);
    this->intValue = static_cast<int>(this->floatValue);
    this->doubleValue = static_cast<double>(this->floatValue);
}

void Casting::convert(void)
{
    switch(this->type){
        case CHAR:
            this->charValue = this->Input[0];
            cToOther();
			break;
        case INT:
			this->intValue = std::stoi(this->Input);
			iToOther();
			break;
		case DOUBLE:
			this->doubleValue = std::stod(this->Input);
			dToOther();
			break;
		case FLOAT:
			this->floatValue = stof(this->Input);
			fToOther();
			break;
		default:
			break;
    }
}