/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:46:13 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/15 18:07:05 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{

public:

	HumanB(std::string name);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &newWeap);

private:
	std::string _name;
	Weapon		*_weapon; //Pointeur here because we initialize weapon after creation of HumanB
};

#endif