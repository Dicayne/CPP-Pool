/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:12:26 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/09 14:33:42 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(Ice const & n) : AMateria(n)
{
	// std::cout << "Ice copy constructor called" << std::endl;
	*this = n;
}

Ice & Ice::operator=(Ice const & rhs)
{
	// std::cout << "Ice assignation called" << std::endl;
	this->AMateria::operator=(rhs);
	this->_type = "ice";
	return (*this);
}

Ice::~Ice()
{
	//std::cout << "Ice destructor called" << std::endl;
}

std::string const & Ice::getType() const
{
	return (this->_type);
}

unsigned int Ice::getXP() const
{
	return (AMateria::getXP());
}

AMateria* Ice::clone() const
{
	AMateria *clone = new Ice();

	return (clone);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
