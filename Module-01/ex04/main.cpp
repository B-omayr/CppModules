/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:04:57 by iomayr            #+#    #+#             */
/*   Updated: 2022/09/24 18:45:51 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replace_data(std::string data, std::ofstream &newfile, std::string s1, std::string s2)
{
    size_t         i;
    size_t         j;
    
    i = -1;
    while(data[++i])
    {
        j = 0;
        while (s1[j] == data[i + j])
        {
            if (s1[j + 1] == '\0')
            {
                newfile << s2;
                i += s1.length();
                replace_data(&data[i], newfile, s1, s2);
                return ;
            }
            j++;
        }
        newfile << data[i];
    } 
}

void ft_replace(std::string filename, std::string s1, std::string s2)
{
    std::ifstream   myfile;
    std::ofstream   newfile;
    std::string     data;

    myfile.open(filename);
    if (!myfile.is_open())
    {
        std::cout << "\033[1;31mI Can't found this file\n\033[0;m";
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
    std::cout << "\033[1;32mData replaced succefully" << std::endl;
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "\033[1;31mYou enter a wrong argument\n\033[0;m";
        return (1);
    }
    std::string fileName = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    ft_replace(fileName, s1, s2);
}
