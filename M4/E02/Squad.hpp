/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:27:56 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/05 15:36:33 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
	public:
		Squad ();
		virtual ~Squad();
		Squad (Squad const & n);
		Squad & operator=(Squad const & rhs);
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int) const;
		virtual int push(ISpaceMarine *sm);

	private:
		ISpaceMarine **_crew;
		int _i;
};

#endif