/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:33:24 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/15 13:31:29 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{

public:

	FragTrap	( std::string name );
	FragTrap	(FragTrap const & n);
	~FragTrap	();
	FragTrap	&operator=(FragTrap const & rhs);
	int			vaulthunter_dot_exe(std::string const & target);
	int			rangedAttack(std::string const & target) const;
	int			meleeAttack(std::string const & target) const;

private:

	int				hyperion_punch( void );
	int				killbot( void );
	int				one_bullet( void );
	int				painful_pain( void );
	int				fatal_error( void );

protected:
	FragTrap ( void );
};

std::ostream &		operator<<( std::ostream & o, FragTrap const & i);

#endif