/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:58:30 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/26 14:23:10 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
    Data ptr;
    uintptr_t tmp1;
    Data *tmp2;

    ptr.test = 9;
    std::cout << ptr.test << std::endl;
    tmp1 = serialize(&ptr);
    std::cout << tmp1 << std::endl;
    tmp2 = deserialize(tmp1);
    std::cout << tmp2->test << std::endl;
    std::cout << deserialize(serialize(tmp2))->test << std::endl;
}