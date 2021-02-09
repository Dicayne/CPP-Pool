/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:07:20 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/01 14:18:49 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " died for no apparent reasons!" << std::endl;
}

Victim::Victim (Victim const & n)
{
	*this = n;
	std::cout << "Some random victim called " << this->_name << " just appeared!*copy*" << std::endl;
}

Victim & Victim::operator=(Victim const & rhs)
{
	this->_name = rhs._name;
	return (*this);
}

std::string	Victim::getName( void ) const
{
	return (this->_name);
}

void	Victim::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned in a cute little sheep!" << std::endl;
}

std::ostream	& operator<<( std::ostream & o, Victim const & i)
{
	o << "I'm " << i.getName() << " and i like otters!" << std::endl;
	return (o);
}