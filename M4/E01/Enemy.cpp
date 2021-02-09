/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:53:52 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/04 13:47:41 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
	std::cout << "Enemy constructor called" << std::endl;
}

Enemy::Enemy(Enemy const & n)
{
	std::cout << "Enemy copy constructor called" << std::endl;
	*this = n;
}

Enemy::~Enemy( void )
{
	 std::cout << "Enemy destructor called" << std::endl;
}

Enemy &	Enemy::operator=(Enemy const & rhs)
{
	this->_hp = rhs._hp;
	this->_type = rhs._type;

	return (*this);
}

std::string const Enemy::getType() const
{
	return (this->_type);
}

int		Enemy::getHP() const
{
	return (this->_hp);
}

void	Enemy::takeDamage(int dmg)
{
	if (this->_hp > 0 && dmg > 0)
	{
		if (dmg > this->_hp)
			dmg = this->_hp;
		this->_hp -= dmg;
		std::cout << this->_type << " -" << dmg << "HP" << std::endl;
	}
}