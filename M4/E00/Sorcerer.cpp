/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:07:15 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/01 13:56:45 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( std::string name, std::string titl_title) : _name(name), _title(titl_title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer( const Sorcerer & n )
{
	*this = n;
	std::cout << this->_name << ", " << this->_title << ", is born!*copy*" << std::endl;
}

Sorcerer & Sorcerer::operator=( Sorcerer const & rhs )
{
	this->_name = rhs._name;
	this->_title = rhs._title;

	return (*this);
}

std::string	Sorcerer::getName( void ) const
{
	return (this->_name);
}

std::string	Sorcerer::getTitle( void ) const
{
	return (this->_title);
}

void Sorcerer::polymorph(Victim const & v) const
{
	v.getPolymorphed();
}

std::ostream	& operator<<( std::ostream & o, Sorcerer const & i)
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and i like ponies!" << std::endl;
	return (o);
}