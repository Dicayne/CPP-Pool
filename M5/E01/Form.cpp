/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:54:59 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/12 00:57:07 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int sign, int exe) : _name(name), _required_grade_sign(sign), _required_grade_exe(exe), _signed(false)
{
	if (this->_required_grade_sign < 1 || this->_required_grade_exe < 1)
	{
		if (this->_required_grade_sign < 1)
			std::cout << "Sign ";
		else
			std::cout << "Exec ";
		throw GradeTooHighException();
	}
	if (this->_required_grade_sign > 150 || this->_required_grade_exe > 150)
	{
		if (this->_required_grade_sign > 150)
			std::cout << "Sign ";
		else
			std::cout << "Exec ";
		throw GradeTooLowException();
	}
	std::cout << "Form Constructor Called" << std::endl;
}

Form::Form(Form const & n) : _name(n._name), _required_grade_sign(n._required_grade_sign), _required_grade_exe(n._required_grade_exe)
{
	std::cout << "Form Copy Constructor Called" << std::endl;
	*this = n;
}

Form & Form::operator=(Form const & rhs)
{
	std::cout << "Form Assignation Called" << std::endl;
	this->_signed = rhs._signed;

	return (*this);
}

Form::~Form()
{
	std::cout << "Form Destructor Called" << std::endl;
}

std::string Form::getName() const
{
	return (this->_name);
}

std::string	Form::getBool() const
{
	if (this->_signed == true)
		return ("Signed");
	else
		return ("Unsigned");
}

void		Form::beSigned( Bureaucrat & bur )
{
	if (bur.getGrade() < this->_required_grade_sign)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

void		Form::gradeInfo( void )
{
	std::cout << this->_name << " sign grade: " << this->_required_grade_sign << ", Exec Grade: " << this->_required_grade_exe << std::endl;
}

std::ostream &		operator<<( std::ostream & o, Form const & i)
{
	o << "Form <" << i.getName() << "> is " << i.getBool() << std::endl;

	return (o);
}