/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:54:09 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/24 22:24:06 by chenlee          ###   ########.fr       */
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

	while (std::getline(in_file, line))
	{
		pos = 0;
		while ((pos = line.find(str1, pos)) != std::string::npos)
		{
			line.replace(pos, str1.length(), str2);
			pos += str2.length();
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
