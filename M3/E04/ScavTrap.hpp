/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:21:13 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/29 13:02:43 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include <random>
#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{

public:

	ScavTrap( void );
	ScavTrap	( std::string name );
	ScavTrap	(ScavTrap const & n);
	~ScavTrap	();
	ScavTrap	&operator=(ScavTrap const & rhs);
	void		challengeNewComer(std::string const & target);

private:

	void			brute_force( void );
	void			rock_paper_scisor( void );
	void			apnea_challenge( void );
	void			russian_roulette( void );
};

std::ostream &		operator<<( std::ostream & o, ScavTrap const & i);
#endif