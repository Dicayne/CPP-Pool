/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:27:54 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/05 17:00:01 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _crew(NULL), _i(0)
{
	std::cout << "Squad Constructor Called" << std::endl;
}

Squad::~Squad()
{
	std::cout << "Squad Destructor Called" << std::endl;
	int i(0);

	while (i < this->_i)
	{
		delete this->_crew[i];
		this->_crew[i] = NULL;
		i++;
	}
	delete [] this->_crew;
}

Squad::Squad (Squad const & n)
{
	*this = n;
}

Squad & Squad::operator=(Squad const & rhs)
{
	int i(0);
	if (this->_crew != NULL)
	{
		while (i < this->_i)
		{
			delete this->_crew[i];
			i++;
		}
		delete [] this->_crew;
	}
	this->_crew = new ISpaceMarine *[rhs._i];
	i = 0;
	while (i < rhs._i)
	{
		this->_crew[i] = rhs._crew[i]->clone();
		i++;
	}
	this->_i = rhs._i;;
	return (*this);
}

int Squad::push(ISpaceMarine *sm)
{
	if (!sm)
	{
		std::cout << "ERROR: NULL Marine can't be add" << std::endl;
		return (-1);
	}
	int i(0);
	ISpaceMarine **newone = new ISpaceMarine *[this->_i + 1];
	newone[this->_i] = sm;
	if (this->_crew != NULL)
	{
		while (i < this->_i)
		{
			if (this->_crew[i] == sm)
			{
				std::cout << "ERROR already in squad" << std::endl;
				delete [] newone;
				return -1;
			}
			newone[i] = this->_crew[i];
			i++;
		}
		delete [] this->_crew;
	}
	this->_crew = newone;
	this->_i++;
	return (this->_i);
}

int Squad::getCount() const
{
	return (this->_i);
}

ISpaceMarine* Squad::getUnit(int n) const
{
	if (n < 0 || n >= this->_i)
		return (NULL);
	return (this->_crew[n]);
}