/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:53:51 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/04 13:56:09 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)	: _name(name)
{
	this->_ap = 40;
	this->_wep = NULL;
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(Character const & n)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = n;
}

Character & Character::operator=(Character const & n)
{
	this->_name = n._name;
	this->_ap = n._ap;
	this->_wep = n._wep;

	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}

void Character::recoverAP()
{
	if (this->_ap >= 31)
	{
		std::cout << this->_name << " +" << 40 - this->_ap << "AP" << std::endl;
		this->_ap = 40;
	}
	else
	{
		std::cout << this->_name << " +10" << "AP" << std::endl;
		this->_ap += 10;
	}
}

void Character::equip(AWeapon *wep)
{
	this->_wep = wep;
}

void Character::attack(Enemy *ene)
{
	if (this->_wep != NULL)
	{
		if (this->_ap - this->_wep->getAPCost() > 0)
		{
			std::cout << this->_name << " attack " << ene->getType() << " with a " << this->_wep->getName() << std::endl;
			this->_wep->attack();
			ene->takeDamage(this->_wep->getDamage());
			this->_ap -= this->_wep->getAPCost();
			if (ene->getHP() == 0)
				delete (ene);
		}
		else
			std::cout << "Not enouth action point to attack" << std::endl;
	}
}

std::string const Character::getName() const
{
	return (this->_name);
}

AWeapon *Character::getWep() const
{
	return (this->_wep);
}

int	Character::getAp() const
{
	return (this->_ap);
}

std::ostream & operator<<(std::ostream & o, Character const & i)
{
	if (i.getWep() == NULL)
		o << i.getName() << " has " << i.getAp() << " and is unarmed" << std::endl;
	else
		o << i.getName() << " has " << i.getAp() << " AP and wields a " << i.getWep()->getName() << std::endl;
	return (o);
}