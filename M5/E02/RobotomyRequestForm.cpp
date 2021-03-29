/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 01:04:32 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/12 16:42:41 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm( std::string const target ) : Form("RobotomyRequestForm", 72, 45, target)
{
	std::cout << this->getName() << " constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << this->getName() << " destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & n) : Form(n)
{
	std::cout << "RobotomyRequestForm Copy Constructor Called" << std::endl;
	*this = n;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	std::cout << "RobotomyRequestForm Assignation Called" << std::endl;
	this->Form::operator=(rhs);

	return (*this);
}

void		RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	if (getBool() == true)
	{
		if (executor.getGrade() < getExecGrade())
		{
			std::cout << executor.getName() << " execute " << getName() << std::endl;
			std::cout << "*DRIIIILLLLJJJJ* .  .  .  . ";
			srand(time(NULL));
			int randy(rand() % 2);

			if(randy == 1)
				std::cout << getTarget() << " has been robotomized!" << std::endl;
			else
				std::cout << getTarget() << "'s robotomy failure" << std::endl;
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