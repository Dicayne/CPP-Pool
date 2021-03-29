/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:07:55 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/12 16:47:12 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main( void )
{
	std::string ul("\033[4m");
	std::string nc("\033[m");

	std::cout << ul << "Classic try" << nc << std::endl << std::endl;
	{
		Bureaucrat bob("Bob", 1);
		Intern toto;
		std::cout << std::endl;
		std::cout << ul << "Intern try to create ShrubberyCreationForm" << nc << std:: endl;
		try
		{
			Form *shrub(toto.makeForm("shrubbery creation", "Raoul"));
			bob.signForm(*shrub);
			bob.executeForm(*shrub);
			delete shrub;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std:: endl << "----------------------------" << std::endl << std::endl;
		std::cout << ul << "Intern try to create PresidentialPardonForm" << nc << std:: endl;
		try
		{
			Form *presi(toto.makeForm("presidential pardon", "Donald"));
			bob.signForm(*presi);
			bob.executeForm(*presi);
			delete presi;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std:: endl << "----------------------------" << std::endl << std::endl;
		std::cout << ul << "Intern try to create RobotomyRequestForm" << nc << std:: endl;
		try
		{
			Form *robot(toto.makeForm("robotomy request", "Daffy"));
			bob.signForm(*robot);
			bob.executeForm(*robot);
			delete robot;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std:: endl << "----------------------------" << std::endl << std::endl;
		std::cout << ul << "Intern try to create an Unknow Form" << nc << std:: endl;
		try
		{
			Form *robot(toto.makeForm("Unknow Form", "Loki"));
			bob.signForm(*robot);
			bob.executeForm(*robot);
			delete robot;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
	}
	return (0);
}