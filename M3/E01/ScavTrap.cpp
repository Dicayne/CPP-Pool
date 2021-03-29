/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:21:10 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/15 13:22:29 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): _name("Undefined"), _hp(100), _max_hp(100),
										_energy(50), _max_energy(50), _lvl(1),
										_melee_attack_dmg(20), _range_attack_dmg(15),
										_armor(3)
{
	std::cout << "ScavTrap <" << this->_name << ">: \"Okay! Launch the challenges!\"" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): _name(name), _hp(100), _max_hp(100),
										_energy(50), _max_energy(50), _lvl(1),
										_melee_attack_dmg(20), _range_attack_dmg(15),
										_armor(3)
{
	std::cout << "ScavTrap <" << this->_name << ">: \"Okay! Launch the challenges!\"" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap <" << this->_name << ">: \"I'll be back!\"" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & n)
{
	*this = n;
	std::cout << "ScavTrap <" << this->_name << ">: \"Oh nice to meet you, myself\"" << std::endl;
}
void		ScavTrap::identify( void ) const
{
	std::cout << "Hi i'm " << this->_name << ", i'm lvl " << this->_lvl << ", i've " << this->_hp << " HP, Prepare to be challenged!!" << std::endl;
}

std::string ScavTrap::get_name( void ) const
{
	return (this->_name);
}

unsigned int ScavTrap::get_hp( void ) const
{
	return (this->_hp);
}

unsigned int ScavTrap::get_energy( void ) const
{
	return (this->_energy);
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
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

int			ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "ScavTrap <" << this->_name << "> ranged attack <" << target << ">: \"BANG! In yo' FACE!\"" << std::endl;
	return (this->_range_attack_dmg);
}

int			ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "ScavTrap <" << this->_name << "> attack <" << target << "> in melee: \"Take my punch!\"" << std::endl;
	return (this->_melee_attack_dmg);
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
		return;
	else if (amount < this->_armor)
	{
		std::cout << "ScavTrap <" << this->_name << ">: \"PFFEU No damages!!\"" << std::endl;
		return;
	}
	else
	{
		std::cout << "ScavTrap <" << this->_name << ">: \"My robotic flesh! AAHH!\"" << std::endl;
		amount -= this->_armor;
		if (this->_hp < amount)
			amount = this->_hp;
		this->_hp -= amount;
	}
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_hp < this->_max_hp)
	{
		if (this->_hp + amount > this->_max_hp)
			amount = this->_max_hp - this->_hp;
		this->_hp += amount;
		std::cout << "ScavTrap <" << this->_name << ">: \"Healsies!\" *";
		std::cout << this->_name << " gain " << amount << "HP*" << std::endl;
	}
	else
		std::cout << "ScavTrap <" << this->_name << ">: \"I can't be more repaired\"" << std::endl;
}

void		ScavTrap::challengeNewComer(std::string const & target)
{
		std::cout << "ScavTrap <" << this->_name << "> challenged <" << target << ">: \"Here we go for the challenge !!!\"" << std::endl;
		int i = (rand() % 4);
		if (i == 0)
			this->brute_force();
		else if (i == 1)
			this->rock_paper_scisor();
		else if (i == 2)
			this->apnea_challenge();
		else if (i == 3)
			this->russian_roulette();
	return;
}

void			ScavTrap::brute_force( void )
{
	std::cout << "ScavTrap <" << this->_name << ">: \"This challenge test your pure strength, hit that !!!\"" << std::endl << std::endl;
	int i = (rand() % 101);

	std::cout << "Brute Force machine: GLING . GLING .. GLING ... POW : " << i << " points!" << std::endl;
	if (i >= 0 && i <= 20)
		std::cout << "ScavTrap <" << this->_name << ">: \"You are so weak\"" << std::endl;
	else if(i >= 21 && i <= 50)
		std::cout << "ScavTrap <" << this->_name << ">: \"MMH ok ... why not\"" << std::endl;
	else if(i >= 51 && i <= 70)
		std::cout << "ScavTrap <" << this->_name << ">: \"OK! Good pure strength\"" << std::endl;
	else if(i >= 71 && i <= 90)
		std::cout << "ScavTrap <" << this->_name << ">: \"WOOOW, You are so strong !!\"" << std::endl;
	else if(i >= 91 && i <= 100)
		std::cout << "ScavTrap <" << this->_name << ">: \"OMG INCREDIBLE !!!!\"" << std::endl;
	return ;
}

void			ScavTrap::rock_paper_scisor( void )
{
	int a = (rand() % 3);
	int b = (rand() % 3);
	std::string rps[3] = {"Rock" , "Paper", "Scisors"};
	std::string scav = rps[a];
	std::string chal = rps[b];
	std::cout << "ScavTrap <" << this->_name << ">: \"Let's do a Rock Paper Scisors!!\"" << std::endl << std::endl;
	std::cout << "ScavTrap <" << scav << "> Challenger <" << chal << ">" << std::endl;
	if ((a == 1 && b == 0) || (a == 0 && b == 2) || (a == 2 && b == 1))
		std::cout << "ScavTrap <" << this->_name << ">: \"" << scav << " win the " << chal << ". YOU LOSE! HHAA!\"" << std::endl;
	else if ((a == 0 && b == 1) || (a == 2 && b == 0) || (a == 1 && b == 2))
		std::cout << "ScavTrap <" << this->_name << ">: \"" << chal << " win the " << scav << ". You win ... well played!\"" << std::endl;
	else
		std::cout << "ScavTrap <" << this->_name << ">: \"That's a draw!!\"" << std::endl;
	return ;
}

void			ScavTrap::apnea_challenge( void )
{
	std::cout << "ScavTrap <" << this->_name << ">: \"Prepare yourself for an apnea challenge! TAKE A BIG BREATH\"" << std::endl << std::endl;
	int i = (rand() % 61);

	if (i >= 0 && i <= 10)
		std::cout << "ScavTrap <" << this->_name << ">: \"" << i << " seconds, tss ridiculous ...\"" << std::endl;
	else if(i >= 11 && i <= 30)
		std::cout << "ScavTrap <" << this->_name << ">: \"" << i << " seconds, that's all ???\"" << std::endl;
	else if(i >= 31 && i <= 40)
		std::cout << "ScavTrap <" << this->_name << ">: \"" << i << " seconds, mmmh...\"" << std::endl;
	else if(i >= 41 && i <= 50)
		std::cout << "ScavTrap <" << this->_name << ">: \"" << i << " seconds, aahh ! Well done !!\"" << std::endl;
	else if(i >= 51 && i <= 60)
		std::cout << "ScavTrap <" << this->_name << ">: \"" << i << " seconds, WOW that's insane!\"" << std::endl;
	return ;
}
void			ScavTrap::russian_roulette( void )
{
	std::cout << "ScavTrap <" << this->_name << ">: \"Are you ready for the most dangerous challenge???\"" << std::endl << std::endl;
	int i = (rand() % 6);

	std::cout << "Challenger take the gun, he's trembling a lot, he take a breath ... ";

	if (i == 3)
		std::cout << "BANG!!!!" << std::endl << "ScavTrap <" << this->_name << ">: \"HAHAHA!!! That's a blank cartridge!!!\"" << std::endl;
	else
		std::cout << "CLICK!!!" << std::endl << "ScavTrap <" << this->_name << ">: \"You are really brave!!!\"" << std::endl;
	return ;
}

std::ostream &		operator<<( std::ostream & o, ScavTrap const & i)
{
	o << "Hi i'm " << i.get_name() << ", i've " << i.get_hp() << "HP and " << i.get_energy() << " Energy points, Prepare to battle!!" << std::endl;

	return o;
}