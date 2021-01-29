/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:20:23 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/15 00:40:14 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent create;
	Zombie *Zombies[4];

	create.setZombieType("Plagued");
	Zombies[0] = create.newZombie("Bob");
	Zombies[0]->announce();
	Zombies[1] = create.newZombie("Robert");
	Zombies[1]->announce();
	create.setZombieType("Inflamed");
	Zombies[2] = create.newZombie("Jack");
	Zombies[2]->announce();
	create.setZombieType("Enraged");
	Zombies[3] = create.newZombie("GNIIII");
	Zombies[3]->announce();
	delete Zombies[0];
	delete Zombies[1];
	delete Zombies[2];
	delete Zombies[3];

	create.randomChump();
	create.randomChump();
	return (0);
}