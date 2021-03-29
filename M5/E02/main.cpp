/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:07:55 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/12 15:24:34 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main( void )
{
	std::string ul("\033[4m");
	std::string nc("\033[m");

	std::cout << ul << "Classic try with big boss bureaucrat" << nc << std::endl << std::endl;
	{
		Bureaucrat bob("Bob", 1);
		ShrubberyCreationForm scf("Pierre");
		RobotomyRequestForm rrf("Paul");
		PresidentialPardonForm ppf("Jacque");

		std::cout << std::endl;
		std::cout << bob;
		scf.gradeInfo();
		rrf.gradeInfo();

		std::cout << std::endl << scf << rrf << ppf << std::endl;

		bob.signForm(scf);
		bob.signForm(scf);
		bob.signForm(rrf);
		bob.signForm(ppf);

		std::cout << std::endl << scf << rrf << ppf << std::endl;

		bob.executeForm(scf);
		bob.executeForm(rrf);
		bob.executeForm(ppf);
		std::cout << std::endl;
	}

	std::cout << std:: endl << "----------------------------------------------------------" << std::endl << std::endl;

	std::cout << ul << "Try too low exec grade exeption" << nc << std::endl << std::endl;
	{
		Bureaucrat bob("Bob", 140);
		ShrubberyCreationForm scf("Michel");

		bob.signForm(scf);
		std::cout << scf;
		std::cout << std::endl;
		bob.executeForm(scf);
		std::cout << std::endl;
	}
	std::cout << std:: endl << "----------------------------" << std::endl << std::endl;
	{
		Bureaucrat bob("Bob", 50);
		RobotomyRequestForm rrf("Paul");

		bob.signForm(rrf);
		std::cout << rrf;
		std::cout << std::endl;
		bob.executeForm(rrf);
		std::cout << std::endl;
	}
	std::cout << std:: endl << "----------------------------" << std::endl << std::endl;
	{
		Bureaucrat bob("Bob", 10);
		PresidentialPardonForm ppf("Jacque");

		bob.signForm(ppf);
		std::cout << ppf;
		std::cout << std::endl;
		bob.executeForm(ppf);
		std::cout << std::endl;
	}

	std::cout << std:: endl << "----------------------------------------------------------" << std::endl << std::endl;

	std::cout << ul << "Try to execute unsigned Form" << nc << std::endl << std::endl;
	{
		Bureaucrat bob("Bob", 140);
		ShrubberyCreationForm scf("Michel");

		std::cout << scf;
		std::cout << std::endl;
		bob.executeForm(scf);
		std::cout << std::endl;
	}
	std::cout << std:: endl << "----------------------------" << std::endl << std::endl;
	{
		Bureaucrat bob("Bob", 50);
		RobotomyRequestForm rrf("Paul");

		std::cout << rrf;
		std::cout << std::endl;
		bob.executeForm(rrf);
		std::cout << std::endl;
	}
	std::cout << std:: endl << "----------------------------" << std::endl << std::endl;
	{
		Bureaucrat bob("Bob", 10);
		PresidentialPardonForm ppf("Jacque");

		std::cout << ppf;
		std::cout << std::endl;
		bob.executeForm(ppf);
		std::cout << std::endl;
	}
	return (0);
}