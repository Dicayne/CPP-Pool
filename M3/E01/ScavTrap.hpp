/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:21:13 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/15 13:20:16 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include <stdlib.h>

class ScavTrap
{

public:

	ScavTrap	( void );
	ScavTrap	( std::string name );
	ScavTrap	(ScavTrap const & n);
	~ScavTrap	();
	ScavTrap &operator=(ScavTrap const & rhs);
	void		identify( void ) const;
	std::string	get_name( void ) const;
	unsigned int get_hp( void ) const;
	unsigned int get_energy( void ) const;
	int			rangedAttack(std::string const & target) const;
	int			meleeAttack(std::string const & target) const;
	void		challengeNewComer(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

private:

	std::string		_name;
	unsigned int	_hp;
	unsigned int	_max_hp;
	unsigned int	_energy;
	unsigned int	_max_energy;
	unsigned int	_lvl;
	unsigned int	_melee_attack_dmg;
	unsigned int	_range_attack_dmg;
	unsigned int	_armor;
	void			brute_force( void );
	void			rock_paper_scisor( void );
	void			apnea_challenge( void );
	void			russian_roulette( void );
};

std::ostream &		operator<<( std::ostream & o, ScavTrap const & i);
#endif