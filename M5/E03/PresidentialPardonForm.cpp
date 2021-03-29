/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 01:04:31 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/12 15:34:57 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string const target ) : Form("PresidentialPardonForm", 25, 5, target)
{
	std::cout << this->getName() << " constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << this->getName() << " destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & n) : Form(n)
{
	std::cout << "PresidentialPardonForm Copy Constructor Called" << std::endl;
	*this = n;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	std::cout << "PresidentialPardonForm Assignation Called" << std::endl;
	this->Form::operator=(rhs);

	return (*this);
}

void		PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if (getBool() == true)
	{
		if (executor.getGrade() < getExecGrade())
		{
			std::cout << executor.getName() << " execute " << getName() << std::endl;
			std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
		}
		else
			throw GradeTooLowException();
	}
	else
	{
		std::cout << getName() << " ";
		throw FormNotSign();
	}
}