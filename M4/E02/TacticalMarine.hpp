/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:28:02 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/05 02:00:14 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:

	TacticalMarine();
	TacticalMarine(TacticalMarine const & n);
	TacticalMarine &operator=(TacticalMarine const & rhs);
	virtual ~TacticalMarine();

	virtual void battleCry() const;
	virtual ISpaceMarine* clone() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif