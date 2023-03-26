/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibra <ibra@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:37:22 by ibra              #+#    #+#             */
/*   Updated: 2023/03/26 14:32:57 by ibra             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

Pmerge::Pmerge(){
    //Xx
}
Pmerge::Pmerge(const Pmerge &copy){
    *this = copy;
}
Pmerge &Pmerge::operator = (const Pmerge &Input)
{
    if (this != &Input)
    {
        this->v = Input.v;
        this->d = Input.d;
    }
    return *this;
}
Pmerge::~Pmerge(){
    //Xx
}

int checkGetValue(std::string arg)
{
    for (int i = 0; arg[i]; i++)
    {
        if (arg[i] < '0' && arg[i] > '9')
            throw std::runtime_error("Error");
    }
    return (atoi(arg.c_str()));
}

void Pmerge::storeData(int ac, char **av)
{
    int num;
    
    for (int i = 1; i < ac; i++)
    {
        num = checkGetValue(av[i]);
        v.push_back(num);
        d.push_back(num);
    }
}

void Pmerge::sortData()
{
    std::cout << "Before : ";
    print(v);
    std::clock_t vstart = std::clock();
    sort(v);
    std::clock_t vend = std::clock();
    std::clock_t dstart = std::clock();
    sort(d);
    std::clock_t dend = std::clock();
    std::cout << "After: ";
    print(v);

    double vduration = (double)(vend - vstart) / 1000;
	double dduration = (double)(dend - dstart) / 1000;
	std::cout << "Time to process a range of " << v.size() << " elements with std::vector " << vduration << " us " << std::endl;
	std::cout << "Time to process a range of " << d.size() << " elements with std::deque " << dduration << " us "  << std::endl;
}

template <typename T>
void Pmerge::print(T &container)
{
    if (v.size() <= 5)
    {
        for (std::vector<int>::iterator it = container.begin(); it != container.end(); it++){
            std::cout << *it << " ";
        }
        std::cout << std::endl;
    }
    else{
        for (std::vector<int>::iterator it = container.begin(); it != container.begin() + 5; it++){
            std::cout << *it << " ";
        }
        std::cout << "[...]" << std::endl;
    }
}

template <typename T>
void Pmerge::insertSort(T &container)
{
    for (size_t i = 0; i < container.size(); i++)
    {
        for (size_t j = 0; j < container.size() - 1; j++)
        {
            if (container[j] > container[j + 1]){
                std::swap(container[j], container[j + 1]);
            }
        }
    }
}

template <typename T>
void Pmerge::merge(T &container, T &left, T &right)
{
	size_t n = 0;
	size_t i = 0;
	size_t j = 0;
    
	while (i < left.size() && j < right.size())
	{
		if (left[i] < right[j])
			container[n++] = left[i++];
		else
			container[n++] = right[j++];
	}
	while (i < left.size())
		container[n++] = left[i++];
	while (j < right.size())
		container[n++] = right[j++];
}

template <typename T>
void Pmerge::sort(T &container)
{
	int size = container.size();
	if (size <= 4)
	{
		insertSort(container);
		return ;
	}
	int mid = size / 2;
	T left(mid);
	T right(size - mid);
	for (int i = 0; i < mid; i++)
		left[i] = container[i];
	for (int i = mid; i < size; i++)
		right[i - mid] = container[i];
	sort(left);
	sort(right);
	merge(container, left, right);
} 
