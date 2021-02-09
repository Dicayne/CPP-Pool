/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:53:59 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/03 16:43:51 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion ( void );
		virtual ~RadScorpion ( void );
		RadScorpion (RadScorpion const & n);
		RadScorpion & operator=(RadScorpion const & rhs);
};

#endif