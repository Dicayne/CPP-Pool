/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:43:49 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/19 15:06:31 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony ponstack(120, "Ponystack");
	ponstack.getPonyPresentation();
	ponstack.goTrot();
	ponstack.goGallop();
	ponstack.goGallop();
	std::cout << "Pony speed is: " << ponstack.getSpeed() << std::endl;
	ponstack.stopRun();
	std::cout << "Pony speed is: " << ponstack.getSpeed() << std::endl;
	std::cout << std::endl;
}

void	ponyOnTheHeap()
{
	Pony *ponheap(new Pony(150, "Ponyheap"));
	ponheap->getPonyPresentation();
	ponheap->goTrot();
	ponheap->goGallop();
	ponheap->goTrot();
	std::cout << "Pony speed is: " << ponheap->getSpeed() << std::endl;
	ponheap->stopRun();
	std::cout << "Pony speed is: " << ponheap->getSpeed() << std::endl;
	delete ponheap;
	std::cout << std::endl;
}

int		main()
{
	std::cout << "Instance Pony on the Heap!" << std::endl;
	ponyOnTheHeap();
	std::cout << "Instance Pony on the Stack!" << std::endl;
	ponyOnTheStack();
	return (0);
}