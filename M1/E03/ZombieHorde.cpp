/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:20:30 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/15 01:21:52 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _horde_size(n)
{
	int i(0);

	if (n > 0)
	{
		this->_horde = new Zombie[n];
		while (i < n)
		{
			this->_horde[i].set_name(randomChump());
			this->_horde[i].set_type("Vegetarian");
			i++;
		}
		std::cout << std::endl << "OMG THAT'S A ZOMBIE HORDE !!!!" << std::endl << std::endl;
	}
	else
		std::cout << "Please choose a decent number of zombies for this horde !" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	if (this->_horde_size > 0)
		delete[] this->_horde;
}

void		ZombieHorde::announce() const
{
	int i(0);

	if (this->_horde_size > 0)
	{
		while (i < this->_horde_size)
		{
			this->_horde[i].announce();
			i++;
		}
		std::cout << std::endl;
	}
}

std::string	ZombieHorde::randomChump()
{
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

	return (name);
}