/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:46:09 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/15 18:07:11 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA
{

public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack();

private:

	std::string _name;
	Weapon		&_weapon;//Reference here because we initialize weapon directly when HumanA is created
};

#endif