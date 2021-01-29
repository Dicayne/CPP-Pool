/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:33:24 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/29 12:57:44 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include <random>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:

	FragTrap( void );
	FragTrap	( std::string name );
	FragTrap	(FragTrap const & n);
	~FragTrap	();
	FragTrap	&operator=(FragTrap const & rhs);
	int			vaulthunter_dot_exe(std::string const & target);

private:

	int				hyperion_punch( void );
	int				killbot( void );
	int				one_bullet( void );
	int				painful_pain( void );
	int				fatal_error( void );
};

std::ostream &		operator<<( std::ostream & o, FragTrap const & i);

#endif