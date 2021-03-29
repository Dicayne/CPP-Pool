/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:07:47 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/12 00:56:48 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw GradeTooHighException();

	if (this->_grade > 150)
		throw GradeTooLowException();

	std::cout << "Bureaucrat Constructor Called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const & n ) : _name(n.getName())
{
	std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
	*this = n;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	std::cout << "Bureaucrat Assignation Called" << std::endl;
	this->_grade = rhs._grade;

	return (*this);
}

std::string Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

void		Bureaucrat::inc_grade( void )
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void		Bureaucrat::dec_grade( void )
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

void		Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cout << this->getName() << " cant sign " << form.getName() << " because his grade is too low" << std::endl;
	}
}

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & i)
{
	o << i.getName() << ", bureaucrat grade <" << i.getGrade() << ">" << std::endl;

	return (o);
}
