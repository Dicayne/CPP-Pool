/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 01:04:33 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/12 15:31:11 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm( std::string const target );
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const & n);
		RobotomyRequestForm &operator=(RobotomyRequestForm const & rhs);
		virtual void		execute( Bureaucrat const & executor ) const;

	private:
		RobotomyRequestForm ( void );
};

#endif