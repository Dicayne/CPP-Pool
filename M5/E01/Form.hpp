/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:55:17 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/12 00:57:13 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string name, int sign, int exe);
		Form(Form const & n);
		Form &operator=(Form const & rhs);
		~Form();

		std::string getName() const;
		std::string	getBool() const;
		void		beSigned( Bureaucrat & bur );
		void		gradeInfo( void );

		class GradeTooHighException : public std::exception
		{
			const char* what() const throw(){
				return ("Grade too High");
			}
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw(){
				return ("Grade too Low");
			}
		};

	private:
		std::string const	_name;
		int const			_required_grade_sign;
		int const			_required_grade_exe;
		bool				_signed;
};

std::ostream &		operator<<( std::ostream & o, Form const & i);

#endif