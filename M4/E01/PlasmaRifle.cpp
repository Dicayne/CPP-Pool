/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:53:54 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/03 15:16:56 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle ( void ) : AWeapon("Plasma Rifle", 5, 21)
{
	std::cout << "PlasmaRifle constructor call" << std::endl;
}

PlasmaRifle::~PlasmaRifle( void )
{
	std::cout << "PlasmaRifle destructor call" << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & n) : AWeapon(n.getName(), n.getAPCost(), n.getDamage())
{
	std::cout << "PlasmaRifle copy constructor call" << std::endl;
	*this = n;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	this->AWeapon::operator=(rhs);
	return (*this);
}

void PlasmaRifle::attack ( void ) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}