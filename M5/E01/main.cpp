/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:07:55 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/11 16:27:29 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
	std::string ul("\033[4m");
	std::string nc("\033[m");
	{
		std::cout << ul << "Create Bureaucrate" << nc << std::endl;
		Bureaucrat bob("Bob", 1);
		std::cout << bob;
		std::cout << std::endl;

		std::cout << ul << "Try Classic Form" << nc << std::endl;
		try
		{
			Form bebop("Bebop", 130, 100);
			bebop.gradeInfo();
			std::cout << std::endl << bebop;

			bob.signForm(bebop);
			std::cout << bebop << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl;
		std::cout << ul << "Try too high and too low sign grade Form" << nc << std::endl;
		try
		{
			Form bebop("Bebop", 0, 100);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
		try
		{
			Form bebop("Bebop", 151, 100);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl;
		std::cout << ul << "Try too high and too low exec grade Form" << nc << std::endl;
		try
		{
			Form bebop("Bebop", 110, 0);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
		try
		{
			Form bebop("Bebop", 15, 151);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
	}
	{
		std::cout << std::endl << ul << "Try to sign form with insufficient grade" << nc << std::endl;
		std::cout << ul << "Create Bureaucrate" << nc << std::endl;
		Bureaucrat bab("Bab", 120);
		std::cout << bab;
		std::cout << std::endl;
		std::cout << ul << "Create Form" << nc << std::endl;
		Form boomie("Boomie", 100, 50);
		boomie.gradeInfo();
		std::cout << boomie << std::endl;
		bab.signForm(boomie);
		std::cout << std::endl;
	}
	return (0);
}