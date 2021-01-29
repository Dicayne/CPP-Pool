/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:33:27 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/29 13:00:11 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	_hp = 100;
	_max_hp = 100;
	_range_attack_dmg = 20;
	_armor = 5;
	std::cout << "Default FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name )
{
	_name = name;
	_hp = 100;
	_max_hp = 100;
	_energy = 100;
	_max_energy = 100;
	_lvl = 1;
	_melee_attack_dmg = 30;
	_range_attack_dmg = 20;
	_armor = 5;
	std::cout << "FragTrap <" << this->_name << ">: \"Let's get this party started!\"" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Fragtrap <" << this->_name << ">: \"The Robot is dead, LONG LIVE THE ROBOT!\"" << std::endl;
}

FragTrap::FragTrap(FragTrap const & n)
{
	*this = n;
	std::cout << "FragTrap <" << this->_name << ">: \"Who am i? Who are you? OOHH i'm you, and you are me !\"*evil laugh*" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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

int			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energy > 25)
	{
		std::cout << "FragTrap <" << this->_name << "> lunch VaultHunter.exe on <" << target << ">: \"Here we go for my vaulthunter.exe !\"" << std::endl;
		this->_energy -= 25;
		auto gen = std::mt19937{std::random_device{}()};
		auto dist = std::uniform_int_distribution<int>{0, 4};
		int i = dist(gen);
		if (i == 0)
			return (this->hyperion_punch());
		else if (i == 1)
			return (this->killbot());
		else if (i == 2)
			return (this->one_bullet());
		else if (i == 3)
			return (this->painful_pain());
		else if (i == 4)
			return (this->fatal_error());
	}
	else
	{
		std::cout << "FragTrap <" << this->_name << ">: \"Crap ! Not enough energy !\"" << std::endl;
		return (0);
	}
	return (0);
}

int				FragTrap::hyperion_punch( void )
{
	std::cout << "FragTrap <" << this->_name << ">: \"Take my Hyperion PUNCH!\"" << std::endl;
	return (5);
}

int				FragTrap::killbot( void )
{
	std::cout << "FragTrap <" << this->_name << ">: \"I'm a Robot Killer !! AHHH!!\"" << std::endl;
	return (15);
}

int				FragTrap::one_bullet( void )
{
	std::cout << "FragTrap <" << this->_name << ">: \"One bullet, one death!\"" << std::endl;
	return (25);
}
int				FragTrap::painful_pain( void )
{
	std::cout << "FragTrap <" << this->_name << ">: \"Enjoy my pain !!!\"" << std::endl;
	return (0);
}

int				FragTrap::fatal_error( void )
{
	std::cout << "FragTrap <" << this->_name << ">: \"Ha ha haaa, taste this fatal error !!\"" << std::endl;
	return (80);
}

int			FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FragTrap <" << this->_name << "> ranged attack <" << target << ">: \"You are so far ... BUT CATCH THIS !!!\"" << std::endl;
	return (this->_range_attack_dmg);
}

int			FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FragTrap <" << this->_name << "> attack <" << target << "> in melee: \"And what about my melee punch!!!\"" << std::endl;
	return (this->_melee_attack_dmg);
}