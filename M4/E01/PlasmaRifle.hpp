/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:53:54 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/03 15:16:17 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle ( void );
		virtual ~PlasmaRifle( void );
		PlasmaRifle(PlasmaRifle const & n);
		PlasmaRifle & operator=(PlasmaRifle const & rhs);
		virtual void attack ( void ) const;
};

#endif