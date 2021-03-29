/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:33:24 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/15 13:38:50 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <stdlib.h>

class FragTrap
{

public:

	FragTrap	( void );
	FragTrap	( std::string name );
	FragTrap	(FragTrap const & n);
	~FragTrap	();
	FragTrap &operator=(FragTrap const & rhs);

	void		identify( void ) const;
	std::string	get_name( void ) const;
	unsigned int get_hp( void ) const;
	unsigned int get_energy( void ) const;
	int			rangedAttack(std::string const & target) const;
	int			meleeAttack(std::string const & target) const;
	int			vaulthunter_dot_exe(std::string const & target);
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
	int				hyperion_punch( void );
	int				killbot( void );
	int				one_bullet( void );
	int				painful_pain( void );
	int				fatal_error( void );
};

std::ostream &		operator<<( std::ostream & o, FragTrap const & i);

#endif