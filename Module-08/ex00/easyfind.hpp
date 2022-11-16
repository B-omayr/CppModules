/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:54:00 by iomayr            #+#    #+#             */
/*   Updated: 2022/11/16 17:21:16 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>

template <typename T>
void easyfind(T &cont, int ser)
{
    int it;
    it = std::find(cont.begin(), cont.end(), ser) - cont.begin();
    if (it != (int)cont.size())
        std::cout << "Element " << ser << " found at position : " << it << std::endl;
    else
        throw "Element Not Found";
}

#endif