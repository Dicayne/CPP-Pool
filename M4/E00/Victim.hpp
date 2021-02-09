/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:07:22 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/01 16:00:42 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{

public:

	Victim( std::string name );
	Victim( Victim const & n );
	virtual ~Victim();
	Victim & operator=( Victim const & rhs);
	std::string	getName( void ) const;
	virtual void	getPolymorphed( void ) const;

protected:

	std::string _name;
	Victim( void );
};

std::ostream	& operator<<( std::ostream & o, Victim const & i);
#endif