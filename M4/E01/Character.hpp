/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:53:52 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/03 17:48:57 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		Character ( void );
		std::string _name;
		int _ap;
		AWeapon *_wep;

	public:
		Character(std::string const & name);
		Character(Character const & n);
		Character & operator=(Character const & n);
		virtual ~Character();
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const getName() const;
		AWeapon *getWep() const;
		int	getAp() const;
};

std::ostream & operator<<(std::ostream & o, Character const & i);
#endif