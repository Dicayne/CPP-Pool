/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:53:50 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/03 14:58:03 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
							_name(name), _apcost(apcost), _damage(damage)
{
	std::cout << "AWeapon constructor call" << std::endl;
}

AWeapon::~AWeapon()
{
	std::cout << "AWeapon Destructor call" << std::endl;
}

AWeapon::AWeapon(AWeapon const & n)
{
	*this = n;
}

AWeapon & AWeapon::operator=(AWeapon const & rhs)
{
	this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	this->_damage = rhs._damage;

	return (*this);
}

std::string const AWeapon::getName ( void ) const
{
	return (this->_name);
}

int AWeapon::getAPCost ( void ) const
{
	return (this->_apcost);
}

int AWeapon::getDamage ( void ) const
{
	return (this->_damage);
}