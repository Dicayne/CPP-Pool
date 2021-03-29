/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:00:46 by vmoreau           #+#    #+#             */
/*   Updated: 2021/03/17 14:46:31 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	//  ---------------------STRING
	std::cout << "|STRING|" << std::endl;
	std::cout << "\033[4mParametric Constructor\033[0m" << std::endl;
	Array<std::string> s_a(3);

	s_a[0] = "String 1";
	s_a[1] = "String 2";
	s_a[2] = "String 3";

	std::cout << "Display the content of the array" << std::endl;
	for (size_t i = 0; i < s_a.size(); i++)
	{
		std::cout << "Array[" << i << "] = " << s_a[i] << std::endl;
	}

	std::cout << std::endl << "\033[4mCopy Constructor\033[0m" << std::endl;
	Array<std::string> c_s_a(s_a);

	std::cout << "Display the content of the copy array" << std::endl;
	for (size_t i = 0; i < s_a.size(); i++)
	{
		std::cout << "Copy_Array[" << i << "] = " << s_a[i] << std::endl;
	}

	std::cout << std::endl << "\033[4mDefault Constructor\033[0m" << std::endl;
	Array<std::string>e_s_a;

	std::cout << "Size: " << e_s_a.size() << std::endl;
	try
	{
		std::cout << "Try to set Array[0] to any value" << std::endl;
		e_s_a[0] = "NOP";
		std::cout << "Successful Access" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: "<< e.what() << '\n';
	}

	// ---------------------INT
	std::cout << std::endl << "|INT|" << std::endl;

	Array<int> i_a(6);

	std::cout << std::endl << "Set Up Array Values" << std::endl;
	for (size_t i = 0; i < i_a.size(); i++)
	{
		i_a[i] = i * (i * 23);
		std::cout << "Array[" << i << "] = " << i << " x " << i * 23 << std::endl;
	}
	std::cout << std::endl << "Display the content of the array" << std::endl;
	for (size_t i = 0; i < i_a.size(); i++)
	{
		std::cout << "Array[" << i << "] = " << i_a[i] << std::endl;
	}

	// ---------------------FLOAT
	std::cout << std::endl << "|FLOAT|" << std::endl;

	Array<float> f_a(2);

	std::cout << std::endl << "Display the content of the array by default" << std::endl;
	for (size_t i = 0; i < f_a.size(); i++)
	{
		std::cout << "Array[" << i << "] = " << f_a[i] << std::endl;
	}
	std::cout << std::endl << "Set up array values" << std::endl;
	f_a[0] = 42.21f;
	f_a[1] = 21.42f;

	std::cout << std::endl << "Display the content of the array" << std::endl;
	for (size_t i = 0; i < f_a.size(); i++)
	{
		std::cout << "Array[" << i << "] = " << f_a[i] << std::endl;
	}


	std::cout << std::endl << "|EXEPTION|" << std::endl;

	Array<int>a(5);
	try
	{
		std::cout << a.size() << " elements in the array, try to accede to the 3rd elements" << std::endl;
		a[3];
		std::cout << "Successful Access" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: "<< e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		std::cout << a.size() << " elements in the array, try to accede to the 42th elements" << std::endl;
		a[42];
		std::cout << "Successful Access" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: "<< e.what() << '\n';
	}
	return 0;
}