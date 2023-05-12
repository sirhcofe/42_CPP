/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:24:08 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/08 17:51:02 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed 		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	Fixed		c;

	// << operator overload
	std::cout << "a = " << a << std::endl;

	std::cout << std::endl;
	
	// increment/decrement operator overload
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a   = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a   = " << a << std::endl;

	std::cout << std::endl;
	
	// arithmetic operator overload
	std::cout << "b     = " << b << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	c = a + Fixed(42);
	std::cout << "c     = " << c << std::endl;
	std::cout << "b - c = " << b - c << std::endl;
	std::cout << "b / c = " << b / a << std::endl;

	std::cout << std::endl;

	// comparative operator overload
	std::cout << "a < b:  " << (a < b) << std::endl;
	std::cout << "c != b: " << (c != b) << std::endl;
	std::cout << "c > a:  " << (c > a) << std::endl;

	std::cout << std::endl;
	
	// min/max func
	std::cout << "min/max = " << Fixed::max(a, b) << std::endl;
	return (0);
}
