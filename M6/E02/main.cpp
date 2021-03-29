/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:48:56 by vmoreau           #+#    #+#             */
/*   Updated: 2021/03/11 16:40:29 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base *gererate( void )
{
	srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		std::cout << "Base Generate is A" << std::endl;
		return (new A);
	}
	else if (i == 1)
	{
		std::cout << "Base Generate is B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "Base Generate is C" << std::endl;
		return (new C);
	}
}

void identify_from_pointer(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a != NULL)
		std::cout << "Pointer is------ A" << std::endl;
	else if (b != NULL)
		std::cout << "Pointer is------ B" << std::endl;
	else if (c != NULL)
		std::cout << "Pointer is------ C" << std::endl;
}

void identify_from_reference(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "Reference is---- A" << std::endl;
	}
	catch(const std::bad_cast& bc)
	{}

	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "Reference is---- B" << std::endl;
	}
	catch(const std::bad_cast& bc)
	{}

	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "Reference is---- C" << std::endl;
	}
	catch(const std::bad_cast& bc)
	{}
}

int main()
{
	Base *b;

	b = gererate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete (b);
}
