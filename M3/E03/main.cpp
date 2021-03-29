/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:33:20 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/15 13:30:32 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int main()
{
	srand((unsigned int)time(NULL));
	FragTrap *clap(new FragTrap("Frag"));
	ScavTrap *scav(new ScavTrap("Scav"));
	NinjaTrap *ninja_c(new NinjaTrap("Ninja_clap"));
	NinjaTrap *ninja_t(new NinjaTrap("Ninja_trap"));

	std::cout << std::endl;
	ninja_c->ninjaShoebox(*clap);
	ninja_c->ninjaShoebox(*scav);
	ninja_c->ninjaShoebox(*ninja_t);

	std::cout << std::endl;

	delete clap;
	delete scav;
	delete ninja_c;
	delete ninja_t;
}
