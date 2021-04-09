/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 17:01:28 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/09 12:44:21 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::cout << "|CHAR test on display Function|" << std::endl;
	char c_a[] = "abcdefg";
	iter<char>(c_a, 7, &display);

	std::cout << std::endl << "-------" << std::endl << std::endl;

	std::cout << "|STRING test on display Function|" << std::endl;
	std::string s_a[] = {"Hello", "World", "Forty", "Two"};
	iter<std::string>(s_a, 4, &display);

	std::cout << std::endl << "-------" << std::endl << std::endl;

	std::cout << "|INT test on incrementation Function|" << std::endl;
	int i_a[] = {1, 42, 89, 16, 78};
	iter<int>(i_a, 5, &display);
	iter<int>(i_a, 5, &inc);
	std::cout << std::endl;
	iter<int>(i_a, 5, &display);

	std::cout << std::endl << "-------" << std::endl << std::endl;

	std::cout << "|DOUBLE test on square Function|" << std::endl;
	double d_a[] = {15.425, 42.21, 8.78, 1.36, 3.14};
	iter<double>(d_a, 5, &display);
	iter<double>(d_a, 5, &square);
	std::cout << std::endl;
	iter<double>(d_a, 5, &display);
}