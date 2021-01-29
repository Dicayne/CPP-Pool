/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:11:53 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/18 16:25:33 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{

public:
	Fixed( void );
	Fixed( int const n );
	Fixed( float const m );
	Fixed( Fixed const & src );
	~Fixed();
	Fixed &operator=(Fixed const & rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:
	int _integer;
	static const int _bits = 8;
};

std::ostream &		operator<<( std::ostream & o, Fixed const & i);

#endif