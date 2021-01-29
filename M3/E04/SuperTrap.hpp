/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:27:53 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/29 13:03:15 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{

public:

	SuperTrap	( void );
	SuperTrap	( std::string name );
	SuperTrap	(SuperTrap const & n);
	~SuperTrap	();
	SuperTrap	&operator=(SuperTrap const & rhs);

	void		presentation() const;
	using NinjaTrap::meleeAttack;
	using FragTrap::rangedAttack;
};

#endif