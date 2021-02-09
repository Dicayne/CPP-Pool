/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:12:28 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/09 14:54:35 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

int main()
{
	std::cout << "\033[4mFill Materia Source:\033[0m" << std::endl;
	IMateriaSource* mat_src = new MateriaSource();

	mat_src->learnMateria(new Ice());
	mat_src->learnMateria(new Cure());
	mat_src->learnMateria(new Ice());
	mat_src->learnMateria(new Cure());
	std::cout << std::endl;

	std::cout << "\033[4mInventory of Materia Source Overfilled:\033[0m" << std::endl;

	mat_src->learnMateria(new Cure());
	std::cout << std::endl;

	std::cout << "\033[4mAdd Character:\033[0m" << std::endl;
	ICharacter* toto = new Character("Toto");
	std::cout << std::endl;

	std::cout << "\033[4mFill Materia inventory of " << toto->getName() << ":\033[0m" << std::endl;
	AMateria* tmp;
	tmp = mat_src->createMateria("ice");
	toto->equip(tmp);
	tmp = mat_src->createMateria("cure");
	toto->equip(tmp);
	tmp = mat_src->createMateria("cure");
	toto->equip(tmp);
	tmp = mat_src->createMateria("cure");
	toto->equip(tmp);
	std::cout << std::endl;

	std::cout << "\033[4mInventory of " << toto->getName() << " Overfilled:\033[0m" << std::endl;
	tmp = mat_src->createMateria("ice");
	toto->equip(tmp);
	std::cout << std::endl;

	std::cout << "\033[4mAdd Character:\033[0m" << std::endl;
	ICharacter* bob = new Character("Bob");
	std::cout << std::endl;

	std::cout << "\033[4mFill Materia inventory of " << bob->getName() << ":\033[0m" << std::endl;
	tmp = mat_src->createMateria("cure");
	bob->equip(tmp);
	tmp = mat_src->createMateria("ice");
	bob->equip(tmp);
	bob->list_materia();
	std::cout << std::endl;

	std::cout << "\033[4mBob = Toto\033[0m" << std::endl;
	*bob = *toto;
	bob->list_materia();
	std::cout << std::endl;


	std::cout << "\033[4mUnequip Materia from Bob\033[0m" << std::endl;
	bob->unequip(0);
	bob->unequip(0);
	std::cout << std::endl;

	std::cout << "\033[4mUnequip Unknown Materia from Bob\033[0m" << std::endl;
	bob->unequip(50);
	bob->unequip(4);
	std::cout << std::endl;

	std::cout << "\033[4mUse Toto's materias and prove xp increase\033[0m" << std::endl;
	toto->use(0, *bob);
	toto->list_materia();
	toto->use(1, *bob);
	toto->list_materia();
	toto->use(0, *bob);
	toto->list_materia();
	toto->use(0, *bob);
	toto->list_materia();
	std::cout << std::endl;

	std::cout << "\033[4mUse Unknown Materia\033[0m" << std::endl;
	toto->use(10, *bob);
	std::cout << std::endl;

	std::cout << "\033[4mDestruction !\033[0m" << std::endl;

	delete bob;
	delete toto;
	delete mat_src;

	return (0);
}