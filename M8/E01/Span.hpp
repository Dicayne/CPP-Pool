/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:33:06 by vmoreau           #+#    #+#             */
/*   Updated: 2021/03/25 14:45:02 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <list>
#include <algorithm>
#include <iostream>

class Span
{
	public:
		Span(unsigned int N);
		Span(Span const &n);
		Span &operator=(Span const &rhs);
		virtual ~Span();
		void	addNumber(int const i);
		template <typename T>
		void	addNumber(T i1, T i2)
		{
			try
			{
				while(i1 != i2)
				{
					this->addNumber(*i1);
					i1++;
				}
			}
				catch(const std::exception& e)
			{
				std::cerr << "Error: " << e.what() << '\n';
			}
		};
		int		shortestSpan();
		int		longestSpan();
		void	display();

	private:
		Span();
		std::list<int> _n_list;
		size_t _size;
};

class Full_span : public std::exception
{
	const char* what() const throw(){
		return ("Span is Full");
		}
};

class Span_Error : public std::exception
{
	const char* what() const throw(){
		return ("Not Enough Value to Find Span");
		}
};

#endif