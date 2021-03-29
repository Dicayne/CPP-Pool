/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 15:25:49 by vmoreau           #+#    #+#             */
/*   Updated: 2021/03/15 14:43:48 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_CPP
#define WHATEVER_CPP

template< typename T >
void swap(T &x, T &y)
{
	T save = x;

	x = y;
	y = save;
}

template< typename T >
T const & max(T const &x, T const &y)
{
	return (x > y ? x : y);
}

template< typename T >
T const & min(T const &x, T const &y)
{
	return (x < y ? x : y);
}

#endif