/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:45:55 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/29 13:01:37 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{

public:

	NinjaTrap	( std::string name );
	NinjaTrap	(NinjaTrap const & n);
	~NinjaTrap	();
	NinjaTrap	&operator=(NinjaTrap const & rhs);
	void		ninjaShoebox( ScavTrap const & target);
	void		ninjaShoebox( FragTrap const & target);
	void		ninjaShoebox( NinjaTrap const & target);
	int			rangedAttack(std::string const & target) const;
	int			meleeAttack(std::string const & target) const;

protected:

	NinjaTrap ( void );

};

std::ostream &		operator<<( std::ostream & o, NinjaTrap const & i);

#endif