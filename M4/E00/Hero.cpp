/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hero.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:07:09 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/01 15:25:29 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Hero.hpp"

Hero::Hero(std::string name) : Victim(name)
{
	std::cout << "SHINING!!" << std::endl;
}

Hero::~Hero()
{
	std::cout << "OOFFF..." << std::endl;
}

Hero::Hero (Hero const & n) : Victim(n._name)
{
	*this = n;
}

Hero & Hero::operator=(Hero const & rhs)
{
	this->_name = rhs._name;
	return (*this);
}

void	Hero::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned into an ungly turtle!" << std::endl;
}

std::ostream	& operator<<( std::ostream & o, Hero const & i)
{
	o << "I'm " << i.getName() << " and i like otters!" << std::endl;
	return (o);
}