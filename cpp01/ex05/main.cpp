/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:11:49 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/27 09:45:34 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		retard;
	std::string	str(argv[1]);

	if (argc != 2)
	{
		std::cerr << "Usage: ./Harl <Complaint>" << std::endl;
		return (1);
	}
	retard.complain(str);
	return (0);
}
