/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:55:30 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/12 01:14:24 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Mutantstack.hpp"

void	display(MutantStack<int> mstack)
{
	MutantStack<int>::iterator it(mstack.begin());
	MutantStack<int>::iterator ite(mstack.end());

	while (it != ite)
	{
		std::cout << *it << std::endl;
		it++;
	}
	std::cout << std::endl;
}

void	erase_all(MutantStack<int> *mstack)
{
	std::cout << "Size of the stack Before erase all: " << mstack->size() << std::endl;

	while (mstack->size() > 0)
	{
		mstack->pop();
	}
	std::cout << "Size of the stack after erase all: " << mstack->size() << std::endl << std::endl;
}

int main()
{
	MutantStack<int> mstack;

	std::cout << "\033[4mAdd Value to the MutantStack by using PUSH\033[0m" << std::endl;
	mstack.push(14);
	mstack.push(42);
	mstack.push(21);

	std::cout << "Size of the stack after PUSH 3 value: " << mstack.size() << std::endl << std::endl;

	std::cout << "\033[4mErase Value to the MutantStack by using POP\033[0m" << std::endl;
	mstack.pop();
	std::cout << "Size of the stack after POP 1 value: " << mstack.size() << std::endl << std::endl;

	std::cout << "\033[4mAdd many value to the MutantStack and display all of them by using iterator\033[0m" << std::endl;

	mstack.push(124);
	mstack.push(1);
	mstack.push(-6754);
	mstack.push(42);
	mstack.push(24);

	display(mstack);

	std::cout << "\033[4mCopy MutantStack\033[0m" << std::endl;
	MutantStack<int> mstack_copy(mstack);
	std::cout << "Display MutantStack Copy:" << std::endl;
	display(mstack_copy);

	std::cout << "\033[4mErase all of MutanStack Copy\033[0m" << std::endl;
	erase_all(&mstack_copy);

	std::cout << "\033[4mFill MutantStack Copy and display\033[0m" << std::endl;
	mstack_copy.push(952);
	mstack_copy.push(54);
	mstack_copy.push(21);
	mstack_copy.push(9723258);

	display(mstack_copy);
	return (0);
}