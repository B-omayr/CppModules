/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:02:44 by iomayr            #+#    #+#             */
/*   Updated: 2022/11/15 15:11:39 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <class myType>
void swap(myType &a, myType &b)
{
    myType tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <class myType>
myType max(myType a, myType b)
{
    return a > b ? a : b;
}

template <class myType>
myType min(myType a, myType b)
{
    return a > b ? b : a;
}

