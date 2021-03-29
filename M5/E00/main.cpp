/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:07:55 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/11 15:07:24 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
	std::string ul("\033[4m");
	std::string nc("\033[m");
	std::cout << ul << "Classic Bureaucrat:" << nc << std::endl;
	try
	{
		Bureaucrat bob("Bob", 20);
		std::cout << bob;
		bob.inc_grade();
		std::cout << bob;
		bob.inc_grade();
		std::cout << bob;
		bob.dec_grade();
		std::cout << bob;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << ul << "Too High Bureaucrate:" << nc << std::endl;
	try
	{
		Bureaucrat tim("Tim", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << ul << "Too Low Bureaucrate:" << nc << std::endl;
	try
	{
		Bureaucrat tam("Tam", 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << ul << "Too much incrementation grade:" << nc << std::endl;
	try
	{
		Bureaucrat toto("Toto", 2);
		std::cout << toto;
		toto.inc_grade();
		std::cout << toto;
		toto.inc_grade();
		std::cout << toto;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << ul << "Too much decrementation grade:" << nc << std::endl;
	try
	{
		Bureaucrat tata("Tata", 149);
		std::cout << tata;
		tata.dec_grade();
		std::cout << tata;
		tata.dec_grade();
		std::cout << tata;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}