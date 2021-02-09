/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:12:27 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/09 12:18:30 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const & n);
		Ice & operator=(Ice const & rhs);
		virtual ~Ice();
		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif