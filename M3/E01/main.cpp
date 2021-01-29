/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:33:20 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/26 14:41:32 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap *clap(new FragTrap("Clap"));
	ScavTrap *scav(new ScavTrap("Scav"));

	std::cout << std::endl;
	clap->identify();
	scav->identify();
	std::cout << std::endl;
	scav->takeDamage(clap->meleeAttack(scav->get_name()));
	clap->takeDamage(scav->rangedAttack(clap->get_name()));
	std::cout << "Scav HP: " << scav->get_hp() << ", Clap HP: " << clap->get_hp() << std::endl;
	std::cout << std::endl;
	scav->beRepaired(50);
	clap->beRepaired(50);
	std::cout << "Scav HP: " << scav->get_hp() << ", Clap HP: " << clap->get_hp() << std::endl;
	std::cout << std::endl;
	scav->takeDamage(clap->vaulthunter_dot_exe(scav->get_name()));
	std::cout << "Scav HP: " << scav->get_hp() << ", Clap HP: " << clap->get_hp() << std::endl;
	std::cout << std::endl;
	scav->beRepaired(50);
	std::cout << std::endl;
	scav->challengeNewComer(clap->get_name());
	std::cout << std::endl;
	delete clap;
	delete scav;
}
