/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:25:00 by vmoreau           #+#    #+#             */
/*   Updated: 2021/03/17 14:28:49 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template< typename T>
class Array
{
	public:
		Array( void )
		{
			std::cout << "An empty Array has been created" << std::endl;
			this->_array = new T[0];
			this->_size = 0;
		};

		Array( unsigned int n )
		{
			std::cout << "An Array of " << n << " elements has been created" << std::endl;
			this->_array = new T[n];
			this->_size = n;
		};

		Array(Array const & n)
		{
			*this = n;
		};

		Array &operator=(Array const & rhs)
		{
			this->_array = new T[rhs._size];
			this->_size = rhs._size;

			int i(0);

			while (i < this->_size)
			{
				this->_array[i] = rhs._array[i];
				i++;
			}
		};

		~Array()
		{
			delete [](this->_array);
		};

		T &operator[](int const idx) const
		{
				if (idx >= this->_size)
					throw elem_not_exist();
				return (this->_array[idx]);
		};

		class elem_not_exist : public std::exception
		{
			const char* what() const throw(){
				return ("This Element does not exist");
			}
		};
		unsigned int size() const
		{
			return (this->_size);
		};

	private:
		T *_array;
		unsigned int _size;
};
#endif