/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:27:52 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/05 17:11:48 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISquad *vlc(new Squad);
	ISpaceMarine *bob(new TacticalMarine);
	ISpaceMarine *bab(new AssaultTerminator);
	ISpaceMarine *bib(new AssaultTerminator);
	ISpaceMarine *bub(new TacticalMarine);

	vlc->push(bob);
	vlc->push(bab);
	vlc->push(bib);
	vlc->push(bub);

	std::cout << std::endl;
	int i(0);

	while (i < vlc->getCount())
	{
		vlc->getUnit(i)->battleCry();
		i++;
	}
	std::cout << std::endl;
	delete vlc;

	std::cout << std::endl << "\033[4mCopy Squad Test\033[0m" << std::endl;

	Squad *vlc2(new Squad);
	ISpaceMarine *tot(new TacticalMarine);
	ISpaceMarine *tat(new AssaultTerminator);

	vlc2->push(tat);
	vlc2->push(tot);

	Squad *vlc3(new Squad(*vlc2));

	delete vlc2;
	vlc3->getUnit(0)->battleCry();
	vlc3->getUnit(1)->battleCry();

	std::cout << std::endl << "\033[4mAssignation Squad Test\033[0m" << std::endl;
	Squad *vlc4(new Squad);
	ISpaceMarine *pop(new TacticalMarine);
	ISpaceMarine *pap(new AssaultTerminator);

	std::cout << std::endl;

	vlc4->push(pop);
	vlc4->push(pap);

	*vlc4 = *vlc3;

	std::cout << std::endl;

	vlc3->getUnit(0)->battleCry();
	vlc3->getUnit(1)->battleCry();

	delete vlc3;
	delete vlc4;
}