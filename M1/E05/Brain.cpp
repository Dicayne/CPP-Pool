/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 01:32:02 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/15 14:34:02 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Hello Brain" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Goodbye Brain" << std::endl;
}

std::string	Brain::identify( void ) const
{
	std::stringstream address;

	address << this;		//Insert Formated "this" in address
	return (address.str()); //Return content of address in std::string variable
}