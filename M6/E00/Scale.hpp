/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scale.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 11:17:41 by vmoreau           #+#    #+#             */
/*   Updated: 2021/03/10 11:37:10 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALE_HPP
#define SCALE_HPP

#include <iostream>
#include <iomanip>

class Scale
{
	private:
		Scale( );
		std::string _type;
		char		_char;
		int			_int;
		float		_float;
		double		_double;
		char		*_value;
		int			_preci;

	public:
		Scale( char *value , std::string type );
		Scale( Scale const & n);
		~Scale();
		Scale &operator=(Scale const & rhs);

		void	set_type( std::string t );
		void	set_int( int i );
		void	set_char(char c );
		void	set_float( float f );
		void	set_double( double d );
		int		set_preci( char *value );

		int		get_int() const{return (this->_int);};
		char	get_char() const{return (this->_char);};
		float	get_float() const{return (this->_float);};
		double	get_double() const{return (this->_double);};
		int		get_preci() const{return (this->_preci);};
		void	display( void );
};

std::ostream &		operator<<( std::ostream & o, Scale const & i);
#endif