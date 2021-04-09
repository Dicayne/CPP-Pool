/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:12:25 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/01 13:25:51 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character ( std::string const name ) : _name(name) , _nb_materia(0)
{
	std::cout << "New Character " << this->_name << " is born!" << std::endl;
	this->_inv = new AMateria *[4];
}

Character::Character ( Character const & n )
{
	// std::cout << "Character copy constructor called" << std::endl;
	this->_inv = new AMateria *[4];
	this->_nb_materia = 0;
	*this = n;
}

Character & Character::operator=( Character const & rhs )
{
	std::cout << "Character assignation called" << std::endl;
	int i(0);

	while (i < this->_nb_materia)
	{
		delete this->_inv[i];
		i++;
	}
	this->_nb_materia = rhs._nb_materia;
	this->_name = rhs._name;
	i = 0;
	while (i < this->_nb_materia)
	{
		this->_inv[i] = rhs._inv[i]->clone();
		i++;
	}

	this->list_materia();
	return (*this);
}

Character::~Character()
{
	//std::cout << "Character destructor called" << std::endl;
	int i(0);

	while (i < this->_nb_materia)
	{
		delete this->_inv[i];
		i++;
	}
	delete [] this->_inv;
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip( AMateria* m )
{
	if (this->_nb_materia < 4)
	{

		this->_inv[this->_nb_materia] = m->clone();
		std::cout << "* " << this->_inv[this->_nb_materia]->getType() << " * Materia equiped!" << std::endl;
		this->_nb_materia++;
	}
	else
		std::cout << "Inventory is full!" << std::endl;
	delete (m);
}

void Character::unequip( int idx )
{
	if (this->_nb_materia > 0 && (idx >= 0 && idx < this->_nb_materia))
	{
		std::cout << this->_name << " unequip " << this->_inv[idx]->getType() << " Materia" << std::endl;
		delete this->_inv[idx];
		int i(idx);
		while (i < this->_nb_materia - 1)
		{
			this->_inv[i] = this->_inv[i + 1]->clone();
			delete this->_inv[i + 1];
			i++;
		}
		this->_inv[this->_nb_materia - 1] = NULL;
		this->_nb_materia--;
	}
	else
		std::cout << "You can't unequip this slot" << std::endl;
}

void Character::use( int idx, ICharacter& target )
{
	if (idx < this->_nb_materia && idx >= 0)
		this->_inv[idx]->use(target);
	else
		std::cout << "This materia dosen't exist" << std::endl;
}

void	Character::list_materia() const
{
	int i(0);

	std::cout << this->_name << " have: ";
	while (i < this->_nb_materia)
	{
		std::cout << this->_inv[i]->getType() << "(" << this->_inv[i]->getXP() << " XP)" << ", ";
		i++;
	}
	std::cout << "Materia in his inventory!" << std::endl;

}