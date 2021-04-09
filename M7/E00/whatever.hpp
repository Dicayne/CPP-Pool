/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 15:25:49 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/08 18:29:28 by vmoreau          ###   ########.fr       */
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
T & max(T &x, T &y)
{
	return (x > y ? x : y);
}

template< typename T >
T & min(T &x, T &y)
{
	return (x < y ? x : y);
}

#endif