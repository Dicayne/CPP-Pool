/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:43:56 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/12 14:41:40 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP
#include <iostream>
#include <iomanip>

class Pony
{
public:

	Pony(int size, std::string name);
	~Pony();
	std::string	getName( void ) const;
	int			getSize( void ) const;
	int			getSpeed( void ) const;
	void		getPonyPresentation( void ) const;
	void 		goGallop( void );
	void		goTrot( void );
	void		stopRun( void );

private:

	int			_size;
	std::string	_name;
	int			_speed;

};
#endif