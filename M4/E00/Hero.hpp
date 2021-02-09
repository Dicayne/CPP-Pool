/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hero.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:07:12 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/01 16:01:22 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HERO_HPP
#define HERO_HPP

#include "Victim.hpp"

class Hero : public Victim
{

public:

	Hero(std::string name);
	virtual ~Hero();
	Hero (Hero const & n);
	Hero & operator=(Hero const & rhs);
	virtual void	getPolymorphed( void ) const;

private:

	Hero ( void );
};

std::ostream	& operator<<( std::ostream & o, Hero const & i);
#endif