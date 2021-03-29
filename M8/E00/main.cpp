/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 00:40:56 by vmoreau           #+#    #+#             */
/*   Updated: 2021/03/22 02:33:40 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include "easyfind.hpp"

void display(int i)
{
	std::cout << i << std::endl;
}

int main()
{
	std::list<int> lst;

	lst.push_back(18);
	lst.push_back(123);
	lst.push_back(634);
	lst.push_back(1);
	lst.push_back(7854);
	lst.push_back(42);

	std::list<int>::const_iterator tmp;
	try
	{
		tmp = easyfind(lst, 123);
		std::cout << "Occurence " << *tmp << " Found!" << std::endl;
		tmp = easyfind(lst, 1);
		std::cout << "Occurence " << *tmp << " Found!" << std::endl;
		tmp = easyfind(lst, 3);
		std::cout << "Occurence " << *tmp << " Found!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}