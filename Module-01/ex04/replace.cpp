/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:09:24 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/27 16:07:27 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void replace_data(std::string data, std::ofstream &newfile, std::string s1, std::string s2)
{  
	size_t	pos;
	
	if (s1.length() == 0)
		return ;
	pos = data.find(s1);
	while (pos != std::string::npos)
	{
		data = data.erase(pos, s1.length());
		data = data.insert(pos, s2);
		pos = data.find(s1, pos + s2.length());
	}
	newfile << data;
    newfile.close();
}

int isEmpty(std::ifstream &myfile)
{
    myfile.seekg(0, std::ios::end);
	if (myfile.tellg() == 0)
	{
		std::cout << "\033[1;31mFile is Empty\033[0;m" << std::endl; 
  		return 0;
	}
	myfile.seekg(0);
    return 1;
}

void ft_replace(std::string filename, std::string s1, std::string s2)
{
    std::ifstream   myfile;
    std::ofstream   newfile;
    std::string     data;

    myfile.open(filename);
    if (!myfile.is_open() || !myfile.good() || !isEmpty(myfile))
    {
        if (!myfile.is_open())
            std::cout << "\033[1;31mI Can't found this file\n\033[0;m";
        else if (!myfile.good())
            std::cout << "\033[1;31mNo permission to read from this file\033[0;m" << std::endl;
        return ;
    }
    newfile.open(filename + ".replace");
    if (!newfile.is_open())
    {
        std::cout << "\033[1;31mI Can't open this file\n\033[0;m";
        return ;
    }
    if (getline(myfile, data, '\0'))
        replace_data(data, newfile, s1, s2);
    myfile.close();
    std::cout << "\033[1;32mData replaced succefully" << std::endl;
}