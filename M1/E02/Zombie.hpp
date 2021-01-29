/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:20:27 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/14 01:17:06 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

class Zombie
{

public:

	Zombie();
	~Zombie();
	void	set_name(std::string name);
	void	set_type(std::string type);
	void	announce( void ) const;

private:

	std::string _name;
	std::string _type;
};


#endif