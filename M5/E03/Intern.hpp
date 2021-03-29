/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:28:41 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/12 16:46:29 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern( void );
		~Intern();
		Intern ( Intern const & n);
		Intern & operator=(Intern const & rhs);
		Form * makeForm(std::string const & form, std::string const & target);

		class UnknowForm : public std::exception
		{
			const char* what() const throw(){
				return ("This Form is Unknown");
			}
		};

	private:
		std::string _form_index[3]{"shrubbery creation", "presidential pardon", "robotomy request"};
		Form * BuildSrubuForm(std::string const & target) const;
		Form * BuildPresiForm(std::string const & target) const;
		Form * BuildRobotForm(std::string const & target) const;
};

#endif