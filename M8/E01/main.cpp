/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:33:01 by vmoreau           #+#    #+#             */
/*   Updated: 2021/03/25 14:48:15 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Span.hpp"

void	classic_test()
{
	std::cout << "\033[4m|Classic Test|\033[0m" << std::endl << std::endl;
	Span sp = Span(5);

	try
	{
		std::cout << "Fill Span List" << std::endl << "..." << std::endl;
		sp.addNumber(5);
		sp.addNumber(54);
		sp.addNumber(1);
		sp.addNumber(65);
		sp.addNumber(17);

		std::cout << "Display Span List" << std::endl;
		sp.display();
		std::cout << std::endl << "Shrotest Span is: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span is : " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	std::cout << std::endl << "---------" << std::endl << std::endl;
}

void	exeption_test()
{
	std::cout << "\033[4m|Exeption Test|\033[0m" << std::endl << std::endl;
	std::cout << "Overfill Exeption" << std::endl << "----------" << std::endl;

	Span sp = Span(1);

	try
	{
		sp.addNumber(5);
		sp.addNumber(54);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	std::cout << std::endl << "No or One Number store" << std::endl << "----------" << std::endl;
	try
	{
		int longest(sp.longestSpan());
		int shortest(sp.shortestSpan());
		std::cout << shortest << "   " << longest << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	std::cout << std::endl << "---------" << std::endl << std::endl;
}

int		get_rdm(){return (rand() % 25000);}

void	long_test()
{
	std::cout << "\033[4m|Long Test|\033[0m" << std::endl << std::endl;

	Span sp = Span(25000);
	std::list<int> lst(25001);
	std::cout << "Generate a List of 25001 int" << std::endl << "---------" << std::endl;

	std::generate(lst.begin(), lst.end(), get_rdm);

	std::cout << "Add Numbers by Passing a Range of Iterators" << std::endl << "---------" << std::endl;
	sp.addNumber(lst.begin(), lst.end());

	std::cout << std::endl << "Shrotest Span is: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span is : " << sp.longestSpan() << std::endl;
}

int main ()
{
	classic_test();
	exeption_test();
	long_test();

	return (0);
}