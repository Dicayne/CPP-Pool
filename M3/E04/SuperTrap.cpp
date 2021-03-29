/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:27:50 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/15 13:36:07 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( void ) : FragTrap(), NinjaTrap()
{
	this->_name = "Undefined";
	this->_lvl = 1;
	std::cout << "It's a Frag... It's a Ninja... NO IT\'S SUPERTRAP!!!!" << std::endl;
}

SuperTrap::SuperTrap(std::string const name) : FragTrap(), NinjaTrap()
{
	this->_name = name;
	this->_lvl = 1;
	std::cout << "It's a Frag... It's a Ninja... NO IT\'S SUPERTRAP!!!!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "OH NO!!!! SUPERTRAP IS DEAD!!!!" << std::endl;
}

SuperTrap	&	SuperTrap::operator=(SuperTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_max_hp = rhs._max_hp;
	this->_energy= rhs._energy;
	this->_max_energy = rhs._max_energy;
	this->_lvl = rhs._lvl;
	this->_melee_attack_dmg = rhs._melee_attack_dmg;
	this->_range_attack_dmg = rhs._range_attack_dmg;
	this->_armor = rhs._armor;

	return (*this);
}

void		SuperTrap::presentation() const
{
	std::cout << "-HP :" << this->_hp << std::endl << "-Energy :" << this->_energy << std::endl;
	std::cout << "-LVL :" << this->_lvl << std::endl<< "-Melee DMG :" << this->_melee_attack_dmg<< std::endl;
	std::cout << "-Ranged DMG :" << this->_range_attack_dmg << std::endl << "-Armor :" << this->_armor << std::endl;
}

std::ostream &		operator<<( std::ostream & o, SuperTrap const & i)
{
	o << "Hi i'm " << i.get_name() << ", i've " << i.get_hp() << "HP and " << i.get_energy() << " Energy points, Prepare to battle!!" << std::endl;

	return o;
}