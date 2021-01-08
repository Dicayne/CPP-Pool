/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:28:10 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/08 18:03:06 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int		index_ok(std::string index, int available)
{
	int i(0);

	while (index.c_str()[i] != '\0')
	{
		if (!isdigit(index.c_str()[i]))
			return (-1);
		i++;
	}
	i = atoi(index.c_str());
	if (i < 1 || i > available)
		return (-1);
	return (0);
}

int		display_contact(contact contact[])
{
	int i(1);
	std::cout << "\033[4m";
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Login" << "|" << std::endl;
	while (contact[i - 1].display_presentation(i))
		i++;
	std::cout << "\033[0m";
	return (i - 1);
}

int		add(contact contact[], int i)
{
	if (i >= 8)
		std::cout << "You can't add more contact 8/8" << std::endl;
	else
		contact[i].add();
}

void	search(contact contact[])
{
	std::string index;
	int i;
	int available;

	available = display_contact(contact);
	if (available > 0)
	{
		std::cout << "Choose index: ";
		std::getline(std::cin, index);
		while (index_ok(index, available) == -1)
		{
			std::cout << "Error: Choose an available index: ";
			std::getline(std::cin, index);
		}
		i = atoi(index.c_str());
		contact[i - 1].display_contact();
	}
	else
		std::cout << std::endl;
}

int		main()
{
	std::string	input;
	contact		contact[8];
	int			i(0);

	std::cout << "Welcome to my awesome PhoneBook" << std::endl << std::endl;
	while (1)
	{
		std::cout << "Please choose an option:" << std::endl;
		std::cout << "-ADD" << std::endl << "-SEARCH" << std::endl << "-EXIT" << std::endl << std::endl;
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
			if (add(contact, i))
				i++;
		}
		else if (input.compare("SEARCH") == 0)
			search(contact);
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "Bye Bye!" << std::endl;
			break ;
		}
		else
			std::cout << "\"" << input << "\": " << "Wrong Input" << std::endl << std::endl;
	}
	return (0);
}