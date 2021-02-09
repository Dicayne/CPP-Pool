/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:53:53 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/04 14:26:18 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main( void )
{
	Character *bob(new Character("Bob"));
	Enemy *rad(new RadScorpion());
	Enemy *mut(new SuperMutant());
	AWeapon *pr(new PlasmaRifle());
	AWeapon *pf(new PowerFist());

	std::cout << std::endl;

	std::cout << "Attack Test!" << std::endl;
	std::cout << *bob << std::endl;
	bob->equip(pr);
	std::cout << *bob << std::endl;
	bob->attack(rad);
	std::cout << "RadScorpion's HP :" << rad->getHP() << std::endl << std::endl;
	bob->attack(mut);
	std::cout << "SuperMutant's HP :" << mut->getHP() << std::endl << std::endl;
	bob->equip(pf);
	std::cout << *bob << std::endl;
	bob->attack(rad);
	std::cout << "RadScorpion's HP :" << rad->getHP() << std::endl << std::endl;
	bob->attack(mut);
	std::cout << "SuperMutant's HP :" << mut->getHP() << std::endl << std::endl;

	std::cout << "Test Death of RadScorpion!" << std::endl;
	bob->attack(rad);
	std::cout << std::endl << *bob << "Test Reload AP" << std::endl;
	bob->recoverAP();
	std::cout << *bob;
	bob->recoverAP();
	bob->recoverAP();
	std::cout << *bob;
	bob->recoverAP();
	std::cout << *bob;
	bob->recoverAP();
	std::cout << *bob;

	std::cout << std::endl << "Test Death of Super Mutant" << std::endl;
	bob->attack(mut);
	std::cout << "SuperMutant's HP :" << mut->getHP() << std::endl << std::endl;
	bob->attack(mut);
	std::cout << "SuperMutant's HP :" << mut->getHP() << std::endl << std::endl;
	bob->attack(mut);

	std::cout << std::endl;
	delete (pr);
	delete (pf);
	delete (bob);
	return (0);
}
