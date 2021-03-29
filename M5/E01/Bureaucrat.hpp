/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:08:01 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/11 16:23:02 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & n);
		Bureaucrat &operator=(Bureaucrat const & rhs);
		~Bureaucrat();

		std::string getName( void ) const;
		int			getGrade( void ) const;
		void		inc_grade( void );
		void		dec_grade( void );
		void		signForm( Form & form );

		class GradeTooHighException : public std::exception
		{
			const char* what() const throw(){
				return ("Bureaucrat Grade too High");
			}
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw(){
				return ("Bureaucrat Grade too Low");
			}
		};

	private:
		Bureaucrat();
		std::string const	_name;
		int					_grade;
};

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & i);

#endif