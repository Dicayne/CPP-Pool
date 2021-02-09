/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:07:17 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/01 13:56:53 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{

public:

	Sorcerer( std::string name, std::string title );
	Sorcerer( const Sorcerer & n );
	virtual ~Sorcerer();
	Sorcerer & operator=( Sorcerer const & rhs );
	std::string	getName( void ) const;
	std::string	getTitle( void ) const;
	void polymorph(Victim const & v) const;

private:

	std::string _name;
	std::string _title;
	Sorcerer( void );
};

std::ostream	& operator<<( std::ostream & o, Sorcerer const & i);

#endif