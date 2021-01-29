/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:11:49 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/19 14:24:51 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _integer(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	this->_integer = (n * (1 << this->_bits));
	std::cout << "Parametric constructor called" << std::endl;
}

Fixed::Fixed(float const m)
{
	std::cout << "Parametric float constructor called" << std::endl;
	this->_integer = roundf(m * (1 << this->_bits));
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed 	&Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(rhs.getRawBits());
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	this->_integer = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_integer);
}

float		Fixed::toFloat( void ) const
{
	return((float)this->_integer / (float)(1 << this->_bits));
}

int		Fixed::toInt ( void ) const
{
	return (this->_integer >> this->_bits);
}

std::ostream	& operator<<( std::ostream & o, Fixed const & i)
{
	o << i.toFloat();

	return (o);
}