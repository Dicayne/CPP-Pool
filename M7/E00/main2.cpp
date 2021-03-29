/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 15:49:58 by vmoreau           #+#    #+#             */
/*   Updated: 2021/03/12 16:18:00 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "whatever.hpp"

int main()
{
	// INT
	std::cout << "\033[4mTest on INT:\033[0m" << std::endl;
	int a(42);
	int b(21);

	std::cout << "Base Value: a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "Swapped Value: a = " << a << ", b = " << b << std::endl;
	std::cout << "Min Value is " << ::min(a, b) << std::endl << "Max Value is " << ::max(a, b) << std::endl << std::endl;

	// CHAR
	std::cout << "\033[4mTest on CHAR:\033[0m" << std::endl;
	char c('B');
	char d('X');

	std::cout << "Base Value: c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "Swapped Value: c = " << c << ", d = " << d << std::endl;
	std::cout << "Min Value is " << ::min(c, d) << std::endl << "Max Value is " << ::max(c, d) << std::endl << std::endl;

	// STRING
	std::cout << "\033[4mTest on SRING:\033[0m" << std::endl;
	std::string e("String E");
	std::string f("String F");

	std::cout << "Base Value: e = " << e << ", f = " << f << std::endl;
	::swap(e, f);
	std::cout << "Swapped Value: e = " << e << ", f = " << f << std::endl;
	std::cout << "Min Value is " << ::min(e, f) << std::endl << "Max Value is " << ::max(e, f) << std::endl << std::endl;

	// FLOAT
	std::cout << "\033[4mTest on FLOAT:\033[0m" << std::endl;
	float g(42.396f);
	float h(21.468f);

	std::cout << "Base Value: g = " << g << ", h = " << h << std::endl;
	::swap(g, h);
	std::cout << "Swapped Value: g = " << g << ", h = " << h << std::endl;
	std::cout << "Min Value is " << ::min(g, h) << std::endl << "Max Value is " << ::max(g, h) << std::endl << std::endl;

	std::cout << "\033[4mTest on DOUBLE:\033[0m" << std::endl;
	double i(1.334);
	double j(1.335);

	std::cout << "Base Value: i = " << i << ", j = " << j << std::endl;
	::swap(i, j);
	std::cout << "Swapped Value: i = " << i << ", j = " << j << std::endl;
	std::cout << "Min Value is " << ::min(i, j) << std::endl << "Max Value is " << ::max(i, j) << std::endl << std::endl;

	std::cout << "\033[4mTest on SCIENCE:\033[0m" << std::endl;
	double k(+INFINITY);
	double l(-INFINITY);

	std::cout << "Base Value: k = " << k << ", l = " << l << std::endl;
	::swap(k, l);
	std::cout << "Swapped Value: k = " << k << ", l = " << l << std::endl;
	std::cout << "Min Value is " << ::min(k, l) << std::endl << "Max Value is " << ::max(k, l) << std::endl << std::endl;

	return (0);
}