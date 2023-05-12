/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:31:16 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/01 22:28:55 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**
 * Fixed a:
 * Creates an object 'a' of type 'Fixed' using the default constructor. The
 * default constructor is a constructor that takes no arguments, and initializes
 * the object to a default state. If a default constructor to the Fixed class is
 * defined, then this constructor will be called to create the object 'a';
 * otherwise, the compiler will provide a default consturctor that does nothing.
 * 
 * Fixed b(a):
 * Creates an object 'b' of type 'Fixed' using the copy constructor. The copy
 * constructor takes an object of the same class as an argument, and initializes
 * the new object with the same values as the argument object. In this case, the
 * copy constructor will create a new object 'b' that is a copy of 'a'.
 * 
 * Fixed c = b;
 * Assigns the value of 'b' to 'c'. The assignment operator is used to copy the
 * values of one object to another object of the same class. If an assignment
 * operator for the 'Fixed' class is defined, then it will be called to perform
 * the assignment. Otherwise, the compiler will provide a default assignment
 * operator that performs a bitwise copy of the object's data members.
 * 
 * Difference between copy constructor and copy assignment operator:
 * 1. Usage:
 *    The copy constructor is used to create a new object as a copy of an existing
 *    object, while the copy assignment operator is used to assign the values of
 *    one object to another object of the same class.
 * 
 * 2. Syntax:
 *    The copy constructor has a special syntax and is defined with the class name
 *    followed by the argument list enclosed in parentheses. The copy assignment
 *    operator is defined using the assignment operator (=) followed by the argument
 *    list enclosed in parentheses.
 * 
 * 3. Return type:
 *    The copy constructor does not have a return type, and it creates a new object.
 *    The copy assignment operator returns a reference to the existing object after
 *    it has been assigned the values of the argument object.
 * 
 * 4. Memory allocation:
 *    The copy constructor creates a new object and allocates memory for it, while
 *    the copy assignment operator does not allocate memory and works with the
 *    existing object.
 * 
 * 5. Behavior:
 *    The copy constructor initializes a new object with the values of an existing
 *    object, while the copy assignment operator assigns the values of an existing
 *    object to another existing object.
*/
int	main(void)
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}
