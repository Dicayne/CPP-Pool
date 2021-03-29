/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:28:45 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/12 16:44:19 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
	std::cout << "A Wild Intern Appears!" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern dies under too much form!" << std::endl;
}

Intern::Intern ( Intern const & n)
{
	std::cout << "Intern Copy Constructor Called" << std::endl;
	*this = n;
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	std::cout << "Intern Assignation Called" << std::endl;

	return (*this);
}

Form * Intern::BuildSrubuForm(std::string const & target) const
{
	return (new ShrubberyCreationForm(target));
}

Form * Intern::BuildPresiForm(std::string const & target) const
{
	return (new PresidentialPardonForm(target));
}

Form * Intern::BuildRobotForm(std::string const & target) const
{
	return (new RobotomyRequestForm(target));
}

Form * Intern::makeForm(std::string const &form, std::string const &target)
{
	int i(0);
	Form *(Intern::*build[3])(std::string const &) const = {&Intern::BuildSrubuForm, &Intern::BuildPresiForm, &Intern::BuildRobotForm};
	while (i < 3)
	{
		if (form.compare(this->_form_index[i]) == 0)
		{
			std::cout << "Intern creates " << form << " form" << std::endl;
			return ((this->*build[i])(target));
		}
		i++;
	}
	throw UnknowForm();
}