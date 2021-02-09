/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:54:00 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/04 13:49:10 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ) : Enemy(170 ,"Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & n) : Enemy(n.getHP(), n.getType())
{
	std::cout << "SuperMutant copy constructor call" << std::endl;
	*this = n;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs)
{
	this->Enemy::operator=(rhs);
	return (*this);
}

void	SuperMutant::takeDamage(int dmg)
{
	dmg -= 3;
	Enemy::takeDamage(dmg);
}