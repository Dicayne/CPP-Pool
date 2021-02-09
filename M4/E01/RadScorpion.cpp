/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:53:59 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/03 16:43:47 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion( void ) : Enemy(80 ,"RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & n) : Enemy(n.getHP(), n.getType())
{
	std::cout << "RadScorpion copy constructor call" << std::endl;
	*this = n;
}

RadScorpion & RadScorpion::operator=(RadScorpion const & rhs)
{
	this->Enemy::operator=(rhs);
	return (*this);
}
