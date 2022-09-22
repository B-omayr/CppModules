/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utiles.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:27:58 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/22 18:35:01 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.hpp"

std::string Get10FirstChar(std::string str)
{
    char Temp[11];

    str.copy(Temp, 10, 0);
    Temp[9] = '.';
    str[10] = '\0';
    return (Temp);
}

void DisplayColumn(std::string Column[4])
{

    std::cout << std::string(45, '-') << std::endl;
    std::cout << "|";
    for (int i = 0; i < 4; i++)
    {
        if (Column[i].length() >= 10)
            Column[i] = Get10FirstChar(Column[i]);
        std::cout << std::setw(10) << Column[i];
        std::cout << "|";
    }
    std::cout << std::endl;
}

unsigned int	FtAtoi(std::string s)
{
	int		res;
	int		i;

	res = 0;
	i = 0;
	while ((s[i] == '\t') || (s[i] == '\n')
		|| (s[i] == '\v') || (s[i] == '\f')
		|| (s[i] == '\r') || (s[i] == ' '))
		i++;
	if (s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res);
}

unsigned int CheckInput(std::string str)
{
    unsigned int Index;
    unsigned int Check;

    Index = FtAtoi(str);
    Check = (Index > 0 && Index <= 8 ? 1 : 0);
    if (Check)
        return (1);
    else
    {
        std::cout << "Index Out Of Range" << std::endl;
        return (0);
    }
}

std::string GetInput(std::string str)
{
    std::string input;

    std::cout << "Enter " << str << " : ";
    if (!getline(std::cin, input) || input.empty())
    {
        std::cout << "\033[1;31mWarning : \" Field cannot be empty!!! \"\033[0;m" << std::endl;
        std::cout << "\033[1;34mMake Sure To Fill All The Field Next Time ...\033[0;m" << std::endl ;
    }  
    return (input);
}