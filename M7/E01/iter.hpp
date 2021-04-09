/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 17:01:31 by vmoreau           #+#    #+#             */
/*   Updated: 2021/04/09 12:44:10 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template< typename T >
void	iter(T *add, size_t size, void (*func)( T & ))
{
	int i(0);

	while (i < size)
	{
		func(add[i]);
		i++;
	}
}

template< typename T >
void display(T &element)
{
	std::cout << element << std::endl;
}

template< typename T >
void inc(T &element)
{
	element++;
}

template< typename T >
void square(T &element)
{
	element *= element;
}
#endif