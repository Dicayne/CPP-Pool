/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:54:00 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/03 16:40:37 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant ( void );
		virtual ~SuperMutant ( void );
		SuperMutant (SuperMutant const & n);
		SuperMutant & operator=(SuperMutant const & rhs);
		virtual void	takeDamage(int dmg);
};

#endif