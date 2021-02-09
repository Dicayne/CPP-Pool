/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:53:55 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/04 13:46:47 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist ( void ) : AWeapon("Power Fist", 8, 50)
{
	std::cout << "PowerFist constructor call" << std::endl;
}

PowerFist::~PowerFist( void )
{
	std::cout << "PowerFist destructor call" << std::endl;
}

PowerFist::PowerFist(PowerFist const & n) : AWeapon(n.getName(), n.getAPCost(), n.getDamage())
{
	std::cout << "PowerFist copy constructor call" << std::endl;
	*this = n;
}

PowerFist & PowerFist::operator=(PowerFist const & rhs)
{
	this->AWeapon::operator=(rhs);
	return (*this);
}

void PowerFist::attack ( void ) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}