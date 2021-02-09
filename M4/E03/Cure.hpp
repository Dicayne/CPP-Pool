/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:12:35 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/09 12:18:28 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const & n);
		Cure & operator=(Cure const & rhs);
		virtual ~Cure();
		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif