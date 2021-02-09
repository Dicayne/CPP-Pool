/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:53:51 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/03 15:08:24 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	public:

		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & n);
		AWeapon & operator=(AWeapon const & rhs);
		virtual ~AWeapon ( void );
		std::string const getName ( void ) const;
		int getAPCost ( void ) const;
		int getDamage ( void ) const;
		virtual void attack ( void ) const = 0;

	private:

		AWeapon ( void );
		std::string	_name;
		int			_apcost;
		int			_damage;
};

#endif