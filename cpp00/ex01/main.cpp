/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:08:35 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/20 20:47:15 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	input;
	PhoneBook	pb;
	
	pb.startup();
	while (input != "EXIT")
	{
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			pb.addContact();
			std::cout << C_GRN "\nNew contact saved! Key in new command:\n" C_RST << std::endl;
		}
		else if (input == "SEARCH")
		{
			pb.search();
			std::cout << C_GRN "\nSearch completed! Key in new command:\n" C_RST << std::endl;
		}
		else if (input != "EXIT")
			std::cout << C_RED "Invalid input detected! Try again:" C_RST << std::endl;
	}
	std::cout << C_GRN "\nThanks for using crappy phonebook\n" C_RST << std::endl;
	return (0);
}
