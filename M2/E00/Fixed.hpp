/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:11:53 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/18 15:28:25 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{

public:
	Fixed( void );
	Fixed(int const n);
	Fixed( Fixed const & src);
	~Fixed();
	Fixed &operator=(Fixed const & rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _integer;
	static const int _bits = 8;
};

std::ostream	& operator<<( std::ostream & o, Fixed const & i);
#endif