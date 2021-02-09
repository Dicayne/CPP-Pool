/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:53:55 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/03 15:17:47 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist ( void );
		virtual ~PowerFist( void );
		PowerFist(PowerFist const & n);
		PowerFist & operator=(PowerFist const & rhs);
		virtual void attack ( void ) const;
};

#endif