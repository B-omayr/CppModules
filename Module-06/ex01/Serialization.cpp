/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:22:29 by iomayr            #+#    #+#             */
/*   Updated: 2022/10/26 14:22:57 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}
