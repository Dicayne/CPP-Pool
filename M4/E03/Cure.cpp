/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:12:34 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/09 14:33:39 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	//std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(Cure const & n) : AMateria(n)
{
	// std::cout << "Cure copy constructor called" << std::endl;
	*this = n;
}

Cure & Cure::operator=(Cure const & rhs)
{
	// std::cout << "Cure assignation called" << std::endl;
	this->AMateria::operator=(rhs);
	this->_type = "cure";
	return (*this);
}

Cure::~Cure()
{
	//std::cout << "Cure destructor called" << std::endl;
}

std::string const & Cure::getType() const
{
	return (this->_type);
}

unsigned int Cure::getXP() const
{
	return (AMateria::getXP());
}

AMateria* Cure::clone() const
{
	AMateria *clone = new Cure();

	return (clone);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}