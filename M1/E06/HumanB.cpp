/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:46:11 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/15 17:58:25 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "*Hello HumanB*" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "*Goodbye HumanB*" << std::endl << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeap)
{
	this->_weapon = &newWeap;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}