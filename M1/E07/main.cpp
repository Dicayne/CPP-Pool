/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:16:11 by vmoreau           #+#    #+#             */
/*   Updated: 2021/01/16 11:40:23 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int nbOccuReplace(0);

void	replace(std::string *line, std::fstream *ofs, char **argv)
{
	int ret;
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	while((ret = line->find(argv[2])) > -1)
	{
		line->replace(ret, s1.size(), s2);
		nbOccuReplace++;
	}
	*ofs << *line;
}

void	stockLine(std::fstream *ifs, std::fstream *ofs, char **argv)
{
	std::string getl;
	std::string line;

	while (std::getline(*ifs, getl))
	{
		line += getl;
		line.push_back('\n');
	}
	line.pop_back();
	replace(&line, ofs, argv);
}

int		main(int argc, char **argv)
{
	std::fstream file;

	if (argc != 4)
	{
		std::cout << "ERROR: Wrong number of Arguments." << std::endl;
		std::cout << "./replace [FILENAME] [OCCURENCE TO REPLACE] [OCCURENCE OF SUBSTITUTION]" << std::endl;
	}
	else if (argv[2][0] == '\0' || argv[3][0] == '\0')
		std::cout << "ERROR: Empty string is used" << std::endl << "OCCURENCES MUST BE NON-EMPTY STRINGS" << std::endl;
	else
	{
		file.open(argv[1], std::ios::in);
		if (!file)
			std::cout << "ERROR: Could not open [" << argv[1] << "]" << std::endl << "PLEASE ENTER A VALID FILENAME" << std::endl;
		else
		{
			std::string newFilname = argv[1];
			std::fstream ofs;
			newFilname += ".replace";
			ofs.open(newFilname, std::ios::out);
			stockLine(&file, &ofs, argv);
			std::cout << "[" << nbOccuReplace << "] Occurence replaced, please check " << argv[1] << ".replace" << std::endl;
			file.close();
			ofs.close();
		}
	}
	return (0);
}