/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 01:04:33 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/12 15:35:45 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string const target ) : Form("ShrubberyCreationForm", 145, 137, target)
{
	std::cout << this->getName() << " constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << this->getName() << " destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & n) : Form(n)
{
	std::cout << "ShrubberyCreationForm Copy Constructor Called" << std::endl;
	*this = n;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	std::cout << "ShrubberyCreationForm Assignation Called" << std::endl;
	this->Form::operator=(rhs);

	return (*this);
}

void		ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	const std::string tree ="\
            ,@@@@@@@,\n\
    ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
 ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88\'\n\
%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888\'\n\
%&&%/ %&%%&&@@\\ V /@@\' `88\\8 `/88\'\n\
`&%\\ ` /%&\'    |.|        \\ \'|8\'\n\
    |o|        | |         | |\n\
    |.|        | |         | |\n\
  \\/ ._\\//_/__/  ,\\_//___\\/.  \\_\n\
";
	if (getBool() == true)
	{
		if (executor.getGrade() < getExecGrade())
		{
			std::cout << executor.getName() << " execute " << getName() << std::endl;
			std::fstream ofs;
			std::string file_name(getTarget() + "_shrubbery");

			ofs.open(file_name.c_str(), std::ios::out);
			ofs << tree;
			ofs.close();
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