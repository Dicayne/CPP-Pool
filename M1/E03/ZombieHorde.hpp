/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:20:32 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/15 01:17:36 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include "Zombie.hpp"

class ZombieHorde
{

public:

	ZombieHorde(int n);
	~ZombieHorde();
	void		announce()const;
	std::string	randomChump();

private:

	int		_horde_size;
	Zombie	*_horde;
};

#endif