/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 01:23:28 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/15 01:29:10 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main()
{
	std::string str("HI THIS IS BRAIN");
	std::string *ptr(&str);
	std::string &ref(str);

	std::cout << "Display Orginal STR:" << std::endl;
	std::cout << str << std::endl << std::endl;

	std::cout << "Display PTR of STR:" << std::endl;
	std::cout << *ptr << std::endl << std::endl;

	std::cout << "Display REFERENCE of STR:" << std::endl;
	std::cout << ref << std::endl << std::endl;

	return (0);
}