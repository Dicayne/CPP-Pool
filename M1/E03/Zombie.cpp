/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:20:25 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/15 00:59:59 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_name = "none";
	this->_type = "none";
	std::cout << "*A Zombie appears*" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "*" << this->_name << " have been destroyed*" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

void	Zombie::set_type(std::string type)
{
	this->_type = type;
}

void	Zombie::announce( void ) const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss ..." << std::endl;
}