/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:11:49 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/15 15:26:09 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		retard;
	std::string	str;

	if (argc != 2)
	{
		std::cerr << "Usage: ./Harl <Complaint>" << std::endl;
		return (1);
	}
	str = argv[1];
	retard.complain(str);
	return (0);
}
