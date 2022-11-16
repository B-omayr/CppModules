/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:15:09 by iomayr            #+#    #+#             */
/*   Updated: 2022/11/15 16:12:47 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename myType>
void iter(myType *arr, int size, void (*f)(myType &a))
{
    for (int i = 0; i < size; i++)
        f(arr[i]);
}

template <typename myType>
void iter(myType *arr, int size, void (*f)(const myType &a))
{
    for (int i = 0; i < size; i++)
        f(arr[i]);
}

void multiply(int &i) 
{
    i *= 10;
}

#endif