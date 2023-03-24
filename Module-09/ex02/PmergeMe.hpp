/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:59:38 by ibra              #+#    #+#             */
/*   Updated: 2023/03/23 11:36:53 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <chrono>
#include <string>
#include <vector>
#include <deque>

class Pmerge{

    private:
        std::vector<int> v;
        std::deque<int>  d;
    public:
        Pmerge();
        Pmerge(const Pmerge &copy);
        Pmerge &operator = (const Pmerge &Input);
        ~Pmerge();

        void storeData(int ac, char **av);
        void sortData();
        void print();
};

#endif