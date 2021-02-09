/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:28:04 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/05 02:00:15 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:

	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const & n);
	AssaultTerminator &operator=(AssaultTerminator const & rhs);
	virtual ~AssaultTerminator();

	virtual void battleCry() const;
	virtual ISpaceMarine* clone() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif