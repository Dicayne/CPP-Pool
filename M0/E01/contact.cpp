/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 13:51:38 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/13 10:31:44 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact(void)
{
	std::cout << "CONTACT CREE" << std::endl;
}

contact::~contact(void)
{
	std::cout << "CONTACT Detruit" << std::endl;
}
int contact::display_presentation(int i)
{
	if (i <= 8 && is_used == true)
	{
		std::string f_name(m_f_name);
		std::string l_name(m_l_name);
		std::string nickname(m_nickname);
		if (f_name.size() > 10)
			{
		f_name.resize(10);
				f_name.back() = '.';
		}
		if (l_name.size() > 10)
		{
			l_name.resize(10);
			l_name.back() = '.';
		}
		if (nickname.size() > 10)
		{
			nickname.resize(10);
			nickname.back() = '.';
		}
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << f_name << "|";
		std::cout << std::setw(10) << l_name << "|";
		std::cout << std::setw(10) << nickname << "|" << std::endl;
		return (1);
	}
	return (0);
}

void contact::display_contact()
{
	std::cout << "First Name: " << m_f_name << std::endl;
	std::cout << "Last Name: " << m_l_name << std::endl;
	std::cout << "Nickname: " << m_nickname << std::endl;
	std::cout << "Login: " << m_login << std::endl;
	std::cout << "Postal Adress: " << m_postal_address << std::endl;
	std::cout << "Email Adress: " << m_email_address << std::endl;
	std::cout << "Phone Number: " << m_phone_num << std::endl;
	std::cout << "Birthday Date: " << m_birthday << std::endl;
	std::cout << "Favorite Meal: " << m_fav_meal << std::endl;
	std::cout << "Underware Color: " << m_underwear_color << std::endl;
	std::cout << "Darkest Secret: " << m_darkest_secret << std::endl << std::endl;
}

void contact::add(void)
{
	std::cout << "Enter First Name: ";
	std::getline(std::cin, m_f_name);
	std::cout << "Enter Last Name: ";
	std::getline(std::cin, m_l_name);
	std::cout << "Enter Nickname: ";
	std::getline(std::cin, m_nickname);
	std::cout << "Enter Login: ";
	std::getline(std::cin, m_login);
	std::cout << "Enter Postal Address: ";
	std::getline(std::cin, m_postal_address);
	std::cout << "Enter Email Adress: ";
	std::getline(std::cin, m_email_address);
	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, m_phone_num);
	std::cout << "Enter Birthday Date: ";
	std::getline(std::cin, m_birthday);
	std::cout << "Enter Favorite Meal: ";
	std::getline(std::cin, m_fav_meal);
	std::cout << "Enter Underware Color: ";
	std::getline(std::cin, m_underwear_color);
	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, m_darkest_secret);
	std::cout << std::endl;
	is_used = true;
}