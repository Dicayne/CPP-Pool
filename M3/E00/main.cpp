/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:33:20 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/22 11:56:32 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap *clap(new FragTrap("Clap"));
	FragTrap *trap(new FragTrap("Trap"));

	std::cout << std::endl << "FragTrap" << " :\"LET\'S FIGHT\"" << std::endl << std::endl;
	std::cout << "First, both ranged attack to start!" << std::endl;
	trap->takeDamage(clap->rangedAttack(trap->get_name()));
	clap->takeDamage(trap->rangedAttack(clap->get_name()));
	std::cout << std::endl << "Then they present themselves: " << std::endl;
	clap->identify();
	trap->identify();
	std::cout << std::endl;
	while (trap->get_hp() > 0 && clap->get_hp() > 0)
	{
		auto gen = std::mt19937{std::random_device{}()};
		auto dist = std::uniform_int_distribution<int>{1, 2};
		int i = dist(gen);
		if (i == 1)
		{
			trap->takeDamage(clap->meleeAttack(trap->get_name()));
			clap->beRepaired(rand() % 15);
			std::cout << "Trap HP: " << trap->get_hp() << ", Clap HP: " << clap->get_hp() << std::endl;
			std::cout << "Trap Energy: " << trap->get_energy() << ", Clap Energy: " << clap->get_energy() << std::endl;
			if (trap->get_hp() > 0)
			{
				clap->takeDamage(trap->vaulthunter_dot_exe(clap->get_name()));
				std::cout << "Trap HP: " << trap->get_hp() << ", Clap HP: " << clap->get_hp() << std::endl;
				std::cout << "Trap Energy: " << trap->get_energy() << ", Clap Energy: " << clap->get_energy() << std::endl;
			}
		}
		else
		{
			clap->takeDamage(trap->meleeAttack(clap->get_name()));
			trap->beRepaired(rand() % 15);
			std::cout << "Clap HP: " << clap->get_hp() << ", Trap HP: " << trap->get_hp() << std::endl;
			std::cout << "Clap Energy: " << clap->get_energy() << ", Trap Energy: " << trap->get_energy() << std::endl;
			if (clap->get_hp() > 0)
			{
				trap->takeDamage(clap->vaulthunter_dot_exe(trap->get_name()));
				std::cout << "Clap HP: " << clap->get_hp() << ", Trap HP: " << trap->get_hp() << std::endl;
				std::cout << "Clap Energy: " << clap->get_energy() << ", Trap Energy: " << trap->get_energy() << std::endl;
			}
		}
		std::cout << std::endl;
	}
	if (trap->get_hp() == 0)
	{
		delete (trap);
		std::cout << "Clap win!" << std::endl << "Trap: \"GRZZZ damaged mother..board..." << std::endl;
		delete (clap);
	}
	else
	{
		delete (clap);
		std::cout << "Trap win!" << std::endl << "Clap: \"GRZZZ damaged mother..board..." << std::endl;
		delete (trap);

	}
}
