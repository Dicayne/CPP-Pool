/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:20:32 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/13 13:18:35 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEENVENT_HPP
#define ZOMBIEENVENT_HPP
#include "Zombie.hpp"

class ZombieEvent
{
public:

	ZombieEvent();
	~ZombieEvent();
	void	setZombieType( std::string type);
	Zombie	*newZombie(std::string name) const;
	void	randomChump();

private:

	std::string _type;
};

#endif