/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 00:40:59 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/12 01:03:42 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

class NotFound : public std::exception
{
	const char* what() const throw()
	{
		return ("Occurence Not Found!");
	}
};

template< typename T >
typename T::const_iterator easyfind(T const &v1, int const v2)
{
	typename T::const_iterator it(v1.begin());
	typename T::const_iterator ite(v1.end());

	while (it != ite)
	{
		if (*it == v2)
			return (it);
		it++;
	}
	throw NotFound();
}

template< typename T >
int easyfind_index(T const &v1, int const v2)
{
	typename T::const_iterator it(v1.begin());
	typename T::const_iterator ite(v1.end());
	int ind (0);

	while (it != ite)
	{
		if (*it == v2)
			return (ind);
		ind++;
		it++;
	}
	throw NotFound();
}

#endif