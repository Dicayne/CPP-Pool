/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 13:52:03 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/13 10:31:58 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>
class contact
{
public:

	contact();
	~contact();
	void add();
	void display_contact();
	int display_presentation(int i);

private:

	bool is_used = false;
	std::string m_f_name;
	std::string m_l_name;
	std::string m_nickname;
	std::string m_login;
	std::string m_postal_address;
	std::string m_email_address;
	std::string m_phone_num;
	std::string m_birthday;
	std::string m_fav_meal;
	std::string m_underwear_color;
	std::string m_darkest_secret;

};
#endif