/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:20:23 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/15 01:21:25 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#define num_z 10

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		ZombieHorde horde(num_z);
		horde.announce();
	}
	else if (argc == 2)
	{
		ZombieHorde horde(atoi(argv[1]));
		horde.announce();
	}
	else
		std::cout << "Only one argument is tolerate" << std::endl;
	return (0);
}