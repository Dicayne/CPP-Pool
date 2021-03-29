/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 10:43:31 by vmoreau           #+#    #+#             */
/*   Updated: 2021/03/11 16:44:27 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scale.hpp"
#include "set_value.hpp"

std::string find_type(char *av)
{
	std::string conv = av;
	std::string conv2 = av;
	if (conv.size() == 1 && !std::isdigit(av[0]) && std::isprint(av[0]))
		return ("CHAR");
	else
	{
		int i (0);
		int neg (0);
		if (conv[i] == '-' || conv[i] == '+')
		{
			if (conv[i] == '-')
				neg = 1;
			conv.erase(0, 1);
		}
		while (i < conv.size())
		{
			if (std::isdigit(av[i + neg]))
				i++;
			else
				break;
		}
		if (i == conv.size() || neg == 1 && i + 1 == conv.size())
		{
			if (atol(av) > 2147483647 || atol(av) < -2147483648)
			{
				std::cout << "Int Value out of range" << std::endl;
				return ("ERROR");
			}
			return ("INT");
		}
		else if (av[i + neg] == '.')
		{
			i++;
			while (i < conv.size())
			{
				if (std::isdigit(av[i + neg]))
					i++;
				else
					break;
			}
			if (i == conv.size())
				return ("DOUBLE");
			else if (av[i + neg] == 'f')
				return ("FLOAT");
		}
		else if (conv2 == "+nan" || conv2 == "+nanf" || conv2 == "-nan" || conv2 == "-nanf" || conv2 == "inf" || conv2 == "inff")
			return ("ERROR");
		else if (conv == "nan" || conv == "inf" || conv == "nanf" || conv == "inff")
			return ("SCIENCE");
		else
			return ("ERROR");
	}
}

int main(int ac, char **av)
{
	if (ac == 1 || ac > 2)
		std::cout << "ERROR : Wrong Number of Input" << std::endl;
	else
	{
		std::string type = find_type(av[1]);
		Scale sc(av[1], type);
		if (type == "INT")
			set_value_i(&sc, av[1]);
		else if (type == "CHAR")
			set_value_c(&sc, av[1]);
		else if (type == "FLOAT")
			set_value_f(&sc, av[1]);
		else if (type == "DOUBLE")
			set_value_d(&sc, av[1]);
		else if (type == "SCIENCE")
			set_value_s(&sc, av[1]);
		else
		{
			std::cout << "ERROR : Wrong Input" << std::endl;
			return (0);
		}
		sc.display();
	}
	return (0);
}