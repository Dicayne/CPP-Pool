/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:33:20 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/15 13:36:40 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main()
{
	srand((unsigned int)time(NULL));
	SuperTrap *super(new SuperTrap("Super"));
	FragTrap *frag(new FragTrap("Frag"));

	std::cout << std::endl;
	std::cout << "SuperTrap <" << super->get_name() << "> Presentation:" << std::endl;
	super->presentation();
	std::cout << std::endl;
	frag->takeDamage(super->meleeAttack(frag->get_name()));
	std::cout << std::endl;
	frag->identify();
	frag->beRepaired(100);
	std::cout << std::endl;
	frag->takeDamage(super->rangedAttack(frag->get_name()));
	std::cout << std::endl;
	frag->identify();
	frag->beRepaired(100);
	std::cout << std::endl;
	super->ninjaShoebox(*frag);
	std::cout << std::endl;
	frag->takeDamage(super->vaulthunter_dot_exe(frag->get_name()));
	std::cout << std::endl;
	frag->identify();
	frag->beRepaired(100);

	std::cout << std::endl;
	delete super;
	delete frag;
}
