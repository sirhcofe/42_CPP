/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:08:35 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/19 16:57:14 by chenlee          ###   ########.fr       */
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
		}
		else if (input == "EXIT")
			;
		else
			std::cout << C_RED "Invalid input detected! Try again:" C_RST << std::endl;
	}
}
