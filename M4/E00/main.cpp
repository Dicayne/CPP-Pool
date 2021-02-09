/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:07:05 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/02 13:43:14 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"
#include "Hero.hpp"

int main( void )
{
	{
		Sorcerer bob("Bob", "the Brutal");
		Victim jack("Jack");
		Peon nill("Nill");
		Hero clark("Clark");

		std::cout << bob << jack << nill << clark;
		bob.polymorph(jack);
		bob.polymorph(nill);
		bob.polymorph(clark);
	}
	std::cout << std::endl;
	{
		Sorcerer *mel(new Sorcerer("Mel", "the Magnificient"));
		Victim *joe(new Peon("Joe"));
		Victim *paul(new Hero("Clank"));

		delete mel;
		delete joe;
		delete paul;
	}
	return (0);
}