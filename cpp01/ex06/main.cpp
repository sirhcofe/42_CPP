/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:26:35 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/27 09:55:32 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string	toUpper(char *str)
{
	std::string	ret(str);
	int			i;

	i = -1;
	while (str[++i] != 0)
		ret[i] = std::toupper(str[i]);
	return (ret);
}

int	main(int argc, char **argv)
{
	Harl	retard;

	if (argc != 2)
	{
		std::cerr << "Usage: ./Harl <Complaint>" << std::endl;
		return (1);
	}
	retard.complain(toUpper(argv[1]));
	return (0);
}
