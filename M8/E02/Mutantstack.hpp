/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:55:35 by vmoreau           #+#    #+#             */
/*   Updated: 2021/03/25 15:48:56 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>( void ) : std::stack<T>() {};
		MutantStack<T>( MutantStack<T> const &n) : std::stack<T>(n) {};
		virtual ~MutantStack<T>( void ) {};

		typedef typename std::deque<T>::iterator iterator;
		iterator begin(){return (this->c.begin());};
		iterator end(){return (this->c.end());};
};

#endif