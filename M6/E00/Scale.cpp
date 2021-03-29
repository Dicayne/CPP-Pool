/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scale.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 11:17:39 by vmoreau           #+#    #+#             */
/*   Updated: 2021/03/10 12:59:36 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scale.hpp"

Scale::Scale( char *value, std::string type) : _value(value), _type(type)
{
	this->_char = '0';
	this->_int = 0;
	this->_float = 0;
	this->_double = 0;
	this->_preci = set_preci(value);
}

Scale::Scale( Scale const & n)
{
	*this = n;
}

Scale::~Scale( void )
{
}

Scale & Scale::operator=(Scale const & rhs)
{
	this->_type = rhs._type;
	this->_int = rhs._int;
	this->_char = rhs._char;
	this->_float = rhs._float;
	this->_double = rhs._double;
}

void	Scale::set_type( std::string t )
{
	this->_type = t;
}

void	Scale::set_int( int i )
{
	this->_int = i;
}

void	Scale::set_char( char c )
{
	this->_char = c;
}

void	Scale::set_float( float f )
{
	this->_float = f;
}

void	Scale::set_double( double d )
{
	this->_double = d;
}

int		Scale::set_preci( char *value )
{
	int i(0);
	int count(0);
	while (value[i] != '.' && value[i] != '\0')
		i++;
	if (value[i] == '\0')
		return (1);
	else
	{
		i++;
		while (std::isdigit(value[i]))
		{
			i++;
			count++;
		}
		return (count);
	}

}

void	Scale::display( void )
{
	if (this->_type != "SCIENCE")
	{
		if (this->_char >= 32 && this->_char <= 126)
			std::cout << "Char: '" << this->_char << "'" << std::endl;
		else
			std::cout << "Char: Non displayable" << std::endl;
		std::cout << "Int: " << this->_int << std::endl;
		std::cout << "Float: " << std::fixed << std::setprecision(this->_preci) << this->_float << "f" << std::endl;
		std::cout << "Double: " << std::fixed << std::setprecision(this->_preci) << this->_double << std::endl;
	}
	else
	{
		std::cout << "Char: Impossible" << std::endl;
		std::cout << "Int: Impossible" << std::endl;
		std::cout << "Float: " << std::fixed << std::setprecision(this->_preci) << this->_float << "f" << std::endl;
		std::cout << "Double: " << std::fixed << std::setprecision(this->_preci) << this->_double << std::endl;
	}

}

std::ostream &		operator<<( std::ostream & o, Scale const & i)
{
	o << "Char: '" << i.get_char() << "'" << std::endl << "Int: " << i.get_int() << std::endl \
	  << "Float: " << std::fixed << std::setprecision(i.get_preci()) << i.get_float() << "f" << std::endl << "Double: " << i.get_double() << std::endl;

	return o;
}