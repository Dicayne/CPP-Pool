/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:43:52 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/12 15:09:39 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(int size, std::string name): _size(size), _name(name), _speed(0)
{
	std::cout << this->_name << " borned." << std::endl;
}

Pony::~Pony()
{
	std::cout << this->_name << " died." << std::endl;
}
std::string	Pony::getName( void ) const
{
	return (this->_name);
}

int			Pony::getSize( void ) const
{
	return (this->_size);
}

int			Pony::getSpeed( void ) const
{
	return (this->_speed);
}

void		Pony::getPonyPresentation( void ) const
{
	std::cout << "Pony name is: " << this->_name;
	std::cout << ", his size is: " << this->_size << "m, ";
	std::cout << "and his actual speed is: " << this->_speed << std::endl;
}

void 		Pony::goGallop( void )
{
	this->_speed = 30;
	std::cout << this->_name << " is top speed!!!" << std::endl;
}

void		Pony::goTrot( void )
{
	if (this->_speed > 15)
		std::cout << this->_name << " reduce speed..." << std::endl;
	else if (this->_speed < 15)
		std::cout << this->_name << " gain speed!!!" << std::endl;
	else
		std::cout << this->_name << " already trot!" << std::endl;
	this->_speed = 15;
}

void		Pony::stopRun( void )
{
	if (this->_speed == 30)
		std::cout << this->_name << " stop brutaly his run!!!" << std::endl;
	else if (this->_speed == 15)
		std::cout << this->_name << " reduce his speed and stop run." << std::endl;
	else
		std::cout << this->_name << " alredy stop!" << std::endl;
	this->_speed = 0;
}
