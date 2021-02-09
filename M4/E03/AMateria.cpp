/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:12:23 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/09 12:42:41 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
	//std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & n)
{
	// std::cout << "AMateria copy constructor called" << std::endl;
	*this = n;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	//std::cout << "AMateria assignation called" << std::endl;
	this->_xp = rhs._xp;

	return (*this);
}

AMateria::~AMateria()
{
	//std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
	this->_xp += 10;
	(void)target;
}