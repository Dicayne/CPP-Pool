/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:12:24 by vmoreau           #+#    #+#             */
/*   Updated: 2021/02/08 16:00:00 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & n);
		AMateria & operator=(AMateria const & rhs);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string		_type;

	private:
		AMateria ( void );
		unsigned int	_xp;
};

#endif