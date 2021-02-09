/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:53:53 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/03 16:00:39 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & n);
		Enemy & operator=(Enemy const & rhs);
		virtual ~Enemy();
		std::string const getType() const;
		int getHP() const;
		virtual void takeDamage(int dmg);

	private:
		Enemy ( void );
		int _hp;
		std::string _type;
};

#endif