/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:08:01 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/10 15:32:27 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
		Bureaucrat();
		std::string const	_name;
		int					_grade;
};

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & i);

#endif