/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:53:52 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/24 17:03:00 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Address of string: " << &str << std::endl;
	std::cout << "Address of strPTR: " << stringPTR << std::endl;
	std::cout << "Address of strREF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of string        : " << str << std::endl;
	std::cout << "Value pointed by strPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by strREF: " << stringREF << std::endl;
	return (0);
}
