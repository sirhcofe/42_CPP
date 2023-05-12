/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:55:36 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/08 16:38:16 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/* ************************************************************************** */

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = num << this->_bits;
}

Fixed::Fixed(float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = static_cast<int>(round(num * (1 << this->_bits)));
}

Fixed::Fixed(const Fixed& old)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = old._value;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed &old)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &old)
		this->_value = old._value;
	return (*this);
}

/* ************************************************************************** */
/*                           Public member function                           */
/* ************************************************************************** */

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(const int raw)
{
	this->_value = raw;
}

/**
 * static_cast operator syntax:
 * static_cast<type>(expression)
*/
float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_value) / (1 << this->_bits));
}

int		Fixed::toInt(void) const
{
	return (this->_value / (1 << this->_bits));
}

/* ************************************************************************** */
/*                              Operator Overload                             */
/* ************************************************************************** */

/**
 * In C++, operators such as '+', '-', '*', '/', '<<', '>>', etc, can be
 * overloaded to work with user-defined types. When an operator for a class is
 * overloaded, we are defining how that operator should work when applied to
 * objects of that class.
 * 
 * In this case of the '<<' operator, it is commonly used to output data to an
 * output stream such as 'std::cout'. Overloading the '<<' operator will
 * redefine how objects of that class should be output to an output stream.
 * 
 * The overloaded '<<' operator is typically defined as a non-static member func
 * or a non-member function. In the case of outputting a 'Fixed' object, it is
 * typically defined as a non-member function that takes 2 arguments:
 * 1. An output stream object - 'std::ostream& os'
 *     This is the output stream object to which the 'Fixed' object will be
 *     output.
 * 2. A 'const' reference to a 'Fixed' object - 'const Fixed& fixed'
 *     This will be the 'Fixed' object that will be output to the output stream.
 * 
 * Note that the '&' symbol in both arguments parsed indicates that the
 * ageumtns are passed by reference, not by value, which can be more efficient
 * by avoiding making a copy of the objects.
*/
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}
