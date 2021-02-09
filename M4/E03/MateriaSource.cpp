/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:12:29 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/09 13:54:18 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource () : _nb_materia(0)
{
	//std::cout << "MateriaSource constructor called" << std::endl;
	this->_inv = new AMateria *[4];
}

MateriaSource::MateriaSource (MateriaSource const & n)
{
	// std::cout << "MateriaSource copy constructor called" << std::endl;
	this->_inv = new AMateria *[4];
	*this = n;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	// std::cout << "MateriaSource assignation called" << std::endl;
	int i(0);

	while (i < this->_nb_materia)
	{
		delete this->_inv[i];
		i++;
	}
	this->_nb_materia = rhs._nb_materia;
	i = 0;
	while (i < this->_nb_materia)
	{
		this->_inv[i] = rhs._inv[i]->clone();
		i++;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	//std::cout << "MateriaSource destructor called" << std::endl;
	int i(0);
	while (i < this->_nb_materia)
	{
		delete this->_inv[i];
		i++;
	}
	delete [] this->_inv;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->_nb_materia < 4)
	{
		this->_inv[this->_nb_materia] = m;
		std::cout << "* " << this->_inv[this->_nb_materia]->getType() << " * Materia learned!" << std::endl;
		this->_nb_materia++;
	}
	else
	{
		std::cout << "Inventory is full!" << std::endl;
		delete m;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i(0);
	int idx(-1);

	while (i < this->_nb_materia && idx == -1)
	{
		if (this->_inv[i]->getType() == type)
			idx = i;
		i++;
	}
	if (idx == -1)
	{
		std::cout << "Unknown type!" << std::endl;
		return (0);
	}
	else
		return (this->_inv[idx]->clone());
}
