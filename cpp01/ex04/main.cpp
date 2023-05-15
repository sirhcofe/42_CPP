/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:54:09 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/15 15:24:11 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	error(int condition)
{
	if (condition == 1)
		std::cerr << "Usage: ./Replace <filename> <s1> <s2>" << std::endl;
	else if (condition == 2)
		std::cerr << "Error: Failed to open input file" << std::endl;
	else if (condition == 3)
		std::cerr << "Error: Failed to create output file" << std::endl;
	return (1);
}

void	readAndReplace(std::ifstream& in_file, std::ofstream& out_file, char **argv)
{
	std::string	line;
	std::string	str1(argv[2]);
	std::string str2(argv[3]);
	size_t		pos;
	size_t		index;

	/* loop that reads characters from input stream until "\n" deliminator is found */
	while (std::getline(in_file, line))
	{
		index = 0;
		while (1)
		{
			/**
			 * Searches the string for the first occurrence of the sequence, "index"
			 * denotes the position of the first character in the string to be considered
			 * in the search.
			 * Return:
			 * The position of the first character of the first match.
			 * If no matches were found, the function returns string::npos.
			*/
			pos = line.find(str1, index);
			if (pos == std::string::npos)
				break ;
			/* Erases part of the string, reducing its length */
			line.erase(pos, str1.length());
			/* Inserts additional characters into the string right before the character indicated by pos */
			line.insert(pos, str2);
			index = pos + str2.length();
		}
		out_file << line << std::endl;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (error(1));
	std::ifstream	in_file(argv[1]);
	if (!in_file)
		return (error(2));
	std::ofstream	out_file(std::string(argv[1]) + ".replace");
	if (!out_file)
		return (error(3));
	readAndReplace(in_file, out_file, argv);
	in_file.close();
	out_file.close();
	return (0);
}
