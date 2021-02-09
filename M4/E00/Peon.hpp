/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:07:12 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/01 16:01:33 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{

public:

	Peon(std::string name);
	virtual ~Peon();
	Peon (Peon const & n);
	Peon & operator=(Peon const & rhs);
	virtual void	getPolymorphed( void ) const;

private:

	Peon ( void );
};

std::ostream	& operator<<( std::ostream & o, Peon const & i);
#endif