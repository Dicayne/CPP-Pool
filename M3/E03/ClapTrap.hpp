/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:49:19 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/29 12:56:43 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <sstream>
#include <random>

class ClapTrap
{

public:

	ClapTrap	( void );
	ClapTrap	(ClapTrap const & n);
	~ClapTrap	();
	ClapTrap 	&operator=(ClapTrap const & rhs);
	void		identify( void ) const;
	std::string	get_name( void ) const;
	unsigned int get_hp( void ) const;
	unsigned int get_energy( void ) const;
	int			rangedAttack(std::string const & target) const;
	int			meleeAttack(std::string const & target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

protected:

	std::string		_name;
	unsigned int	_hp;
	unsigned int	_max_hp;
	unsigned int	_energy;
	unsigned int	_max_energy;
	unsigned int	_lvl;
	unsigned int	_melee_attack_dmg;
	unsigned int	_range_attack_dmg;
	unsigned int	_armor;
};

std::ostream &		operator<<( std::ostream & o, ClapTrap const & i);

#endif