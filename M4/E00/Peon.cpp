/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:07:09 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/01 14:18:27 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon (Peon const & n) : Victim(n._name)
{
	*this = n;
}

Peon & Peon::operator=(Peon const & rhs)
{
	this->_name = rhs._name;
	return (*this);
}

void	Peon::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

std::ostream	& operator<<( std::ostream & o, Peon const & i)
{
	o << "I'm " << i.getName() << " and i like otters!" << std::endl;
	return (o);
}