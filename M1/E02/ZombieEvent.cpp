/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:20:30 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/15 00:37:01 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->_type = "None";
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setZombieType( std::string type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name) const
{
	Zombie *z;

	z = new Zombie();
	z->set_type(this->_type);
	z->set_name(name);
	return (z);
}

void	ZombieEvent::randomChump()
{
	Zombie randomz;
	const char* n1[] = {"Bo","Bi","Lu","Lo","Ki","Ko","Ka","Ni","Mu","Hu","He","Xu","Xa","Za"};
	const char* n2[] = {"ris","zoo","kru","moli","rou","pleu","va", "gri", "jube", "treff", "ssoui" ,"loume", "trouf", "kouli"};
	std::string name;

	int i(0);
	auto gen = std::mt19937{std::random_device{}()};
	auto dist = std::uniform_int_distribution<int>{0, 13};
	name = n1[dist(gen)];

	gen = std::mt19937{std::random_device{}()};
	dist = std::uniform_int_distribution<int>{0, 13};
	name += n2[dist(gen)];
	randomz.set_name(name);
	randomz.set_type("Tourist");
	randomz.announce();
}