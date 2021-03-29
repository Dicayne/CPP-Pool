/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:55:17 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/12 15:29:39 by vmoreau          ###   ########.fr       */
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
		Form(std::string name, int sign, int exe, std::string target);
		Form(Form const & n);
		Form &operator=(Form const & rhs);
		virtual ~Form();

		std::string getName() const;
		std::string	getSign() const;
		bool 		getBool() const;
		void		beSigned( Bureaucrat & bur );
		void		gradeInfo( void ) const;
		int			getSignGrade( void ) const;
		int			getExecGrade( void ) const;
		std::string getTarget( void ) const;
		virtual void		execute( Bureaucrat const & executor ) const;

		class GradeTooHighException : public std::exception
		{
			const char* what() const throw(){
				return ("Grade is too High");
			}
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw(){
				return ("Grade is too Low");
			}
		};
		class FormNotSign : public std::exception
		{
			const char* what() const throw(){
				return ("Form is unsigned");
			}
		};
	private:
		std::string const	_name;
		int const			_required_grade_sign;
		int const			_required_grade_exe;
		bool				_signed;
		std::string			_target;
};

std::ostream &		operator<<( std::ostream & o, Form const & i);

#endif