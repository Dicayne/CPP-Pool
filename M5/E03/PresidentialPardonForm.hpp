/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 01:04:32 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/12 15:30:39 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm( std::string const target );
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const & n);
		PresidentialPardonForm &operator=(PresidentialPardonForm const & rhs);
		virtual void		execute( Bureaucrat const & executor ) const;

	private:
		PresidentialPardonForm ( void );
};

#endif