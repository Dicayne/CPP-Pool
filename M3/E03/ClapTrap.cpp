/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:49:16 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/27 14:48:18 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "A New ClapTrap is Born!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "A ClapTrap is Dead!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & n)
{
	*this = n;
	std::cout << "A ClapTrap copy of " << n.get_name() << "is Born" << std::endl;
}
void		ClapTrap::identify( void ) const
{
	std::cout << "Hi i'm " << this->_name << ", i'm lvl " << this->_lvl << ", i've " << this->_hp << " HP, Prepare to battle!!" << std::endl;
}

std::string ClapTrap::get_name( void ) const
{
	return (this->_name);
}

unsigned int ClapTrap::get_hp( void ) const
{
	return (this->_hp);
}

unsigned int ClapTrap::get_energy( void ) const
{
	return (this->_energy);
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
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

int			ClapTrap::rangedAttack(std::string const & target) const
{
	std::cout << "ClapTrap <" << this->_name << "> ranged attack <" << target << ">: \"Take two bullets, then call me in the morning.\"" << std::endl;
	return (this->_range_attack_dmg);
}

int			ClapTrap::meleeAttack(std::string const & target) const
{
	std::cout << "ClapTrap <" << this->_name << "> attack <" << target << "> in melee: \"Meet professor punch!\"" << std::endl;
	return (this->_melee_attack_dmg);
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
		return;
	else if (amount < this->_armor)
	{
		std::cout << "ClapTrap <" << this->_name << ">: \"I'm protected to your stuff hahaha!!!\"" << std::endl;
		return;
	}
	else
	{
		std::cout << "ClapTrap <" << this->_name << ">: \"Ow hohoho, that hurts! Yipes!\"" << std::endl;
		amount -= this->_armor;
		if (this->_hp < amount)
			amount = this->_hp;
		this->_hp -= amount;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp < this->_max_hp)
	{
		if (this->_hp + amount > this->_max_hp)
			amount = this->_max_hp - this->_hp;
		this->_hp += amount;
		std::cout << "ClapTrap <" << this->_name << ">: \"Sweet life juice!\" *";
		std::cout << this->_name << " gain " << amount << "HP*" << std::endl;
	}
	else
		std::cout << "ClapTrap <" << this->_name << ">: \"Oh i'm already full life !\"" << std::endl;
}
