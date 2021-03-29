/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:43:47 by vmoreau           #+#    #+#             */
/*   Updated: 2021/03/11 17:17:18 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct	Data
{
	std::string s1;
	int 		i;
	std::string s2;
}				Data;

Data *deserialize( void *raw)
{
	Data *data = reinterpret_cast<Data *>( raw );
	return ( data );
}

void *serialize( void )
{
	Data *data(new Data);

	const char * az("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789");
	int i(0);
	std::string s1;
	std::string s2;

	while (i < 10)
	{
		data->s1 += az[rand() % 61];
		i++;
	}
	i = 0;
	while (i < 10)
	{
		data->s2 += az[rand() % 61];
		i++;
	}
	data->i = rand();

	std::cout << "Data Serialized" << std::endl << std::endl;
	std::cout << "[" << &data->s1<< "] " << data->s1 << std::endl << "[" << &data->s2<< "] " << data->s2 << std::endl << "[" << &data->i<< "] " << data->i << std::endl;

	return (reinterpret_cast<void *>(data));
}

int main()
{
	srand(time(NULL));
	void *raw = serialize();
	Data *data = deserialize( raw );

	std::cout << std::endl << "Raw address -> [" << raw << "]" << std::endl;

	std::cout << std::endl << "------------" << std::endl << "Data Deserialized" << std::endl << std::endl;
	std::cout << "[" << &data->s1<< "] " << data->s1 << std::endl << "[" << &data->s2<< "] " << data->s2 << std::endl << "[" << &data->i<< "] " << data->i << std::endl;
	delete (data);
}