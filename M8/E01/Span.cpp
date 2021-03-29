/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:33:03 by vmoreau           #+#    #+#             */
/*   Updated: 2021/03/25 14:47:58 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size(N)
{
}

Span::~Span()
{
}
Span::Span(Span const &n)
{
	*this = n;
}

Span &Span::operator=(Span const &rhs)
{
	this->_size = rhs._size;
	this->_n_list = rhs._n_list;

	return *this;
}

void	Span::addNumber(int const i)
{
	if (this->_n_list.size() < this->_size)
		this->_n_list.push_back(i);
	else
		throw Full_span();
}

int		Span::shortestSpan()
{
	if (this->_n_list.size() <= 1)
		throw Span_Error();
	int span;
	std::list<int> tmp = this->_n_list;
	tmp.sort();
	std::list<int>::const_iterator ite(tmp.end());
	std::list<int>::const_iterator it(tmp.begin());

	span = *++(tmp.begin()) - *tmp.begin();
	for (std::list<int>::const_iterator it2(++(tmp.begin())); it2 != ite; it2++)
	{
		if (span > *it2 - *it)
			span = *it2 - *it;
		it++;
	}
	return (span);
}

int		Span::longestSpan()
{
	if (this->_n_list.size() <= 1)
		throw Span_Error();
	std::list<int> tmp = this->_n_list;

	tmp.sort();
	return (tmp.back() - *tmp.begin());
}

void	Span::display()
{
	std::list<int>::const_iterator ite(this->_n_list.end());

	for (std::list<int>::const_iterator it(this->_n_list.begin()); it != ite; it++)
	{
		std::cout << *it << std::endl;
	}
}