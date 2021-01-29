/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 01:31:57 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/15 14:33:56 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	std::cout << "Hello Human" << std::endl;
}

Human::~Human()
{
	std::cout << "Goodbye Human" << std::endl;
}

std::string	Human::identify( void ) const
{
	return (this->_brain.identify());
}

Brain	&Human::getBrain( void )
{
	return (this->_brain);
}