/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:21:12 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/26 14:23:35 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <iostream>
#include <string>

struct Data {
    int test;
};

uintptr_t serialize(Data* ptr);
Data *deserialize(uintptr_t raw);

# endif