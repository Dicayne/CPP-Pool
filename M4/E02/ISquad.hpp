/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:27:33 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/04 17:24:58 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
#define ISQUAD_HPP

#include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual ~ISquad() {}
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int) const = 0;
		virtual int push(ISpaceMarine*) = 0;
};

#endif