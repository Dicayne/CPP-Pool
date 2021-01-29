/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 01:31:55 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/15 14:33:35 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP
#include "Brain.hpp"

class Human
{

public:

	Human();
	~Human();
	std::string	identify( void ) const;
	Brain	&getBrain( void );

private:
	Brain	_brain;
};

#endif