/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:56:29 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/15 16:28:44 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	print_cap_msg(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != 0)
		str[i] = toupper(str[i]);
	std::cout << str;
}

int		main(int argc, char *argv[])
{
	int	i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		i = 0;
		while (++i < argc)
			print_cap_msg(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}
