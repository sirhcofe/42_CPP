/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:01:57 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/08 17:51:25 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
/*                          Orthodox Canonical Form                           */
/* ************************************************************************** */

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(int num)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_value = num << this->_bits;
}

Fixed::Fixed(float num)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_value = static_cast<int>(roundf(num * (1 << this->_bits)));
}

Fixed::Fixed(const Fixed& old)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->_value = old._value;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed &old)
{
	// std::cout << "Copy assignment operator called" << std::endl;
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
/*                        Comparative Operator Overload                       */
/* ************************************************************************** */

bool	Fixed::operator>(const Fixed& fixed) const
{
	return (toFloat() > fixed.toFloat());
}

bool	Fixed::operator<(const Fixed& fixed) const
{
	return (toFloat() < fixed.toFloat());
}

bool	Fixed::operator>=(const Fixed& fixed) const
{
	return (toFloat() >= fixed.toFloat());
}

bool	Fixed::operator<=(const Fixed& fixed) const
{
	return (toFloat() <= fixed.toFloat());
}

bool	Fixed::operator==(const Fixed& fixed) const
{
	return (toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(const Fixed& fixed) const
{
	return (toFloat() != fixed.toFloat());
}

/* ************************************************************************** */
/*                        Arithmetic Operator Overload                        */
/* ************************************************************************** */

Fixed	Fixed::operator+(const Fixed& fixed) const
{
	float	val;

	val = toFloat() + fixed.toFloat();
	return (Fixed(val));
}

Fixed	Fixed::operator-(const Fixed& fixed) const
{
	float	val;

	val = toFloat() - fixed.toFloat();
	return (Fixed(val));
}

Fixed	Fixed::operator*(const Fixed& fixed) const
{
	float	val;

	val = toFloat() * fixed.toFloat();
	return (Fixed(val));
}

Fixed	Fixed::operator/(const Fixed& fixed) const
{
	float	val;

	val = toFloat() / fixed.toFloat();
	return (Fixed(val));
}

/* ************************************************************************** */
/*                    Increment/Decrement Operator Overload                   */
/* ************************************************************************** */

/* Pre-increment */
Fixed&	Fixed::operator++(void)
{
	this->_value++;
	return *this;
}

/* Pre-decrement */
Fixed&	Fixed::operator--(void)
{
	this->_value--;
	return *this;
}

/* Post-increment */
Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	this->_value++;
	return (temp);
}

/* Post-decrement */
Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	this->_value--;
	return (temp);
}

/* ************************************************************************** */
/*                              Operator Overload                             */
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}

/* ************************************************************************** */
/*                              Min/Max Function                              */
/* ************************************************************************** */

Fixed&	Fixed::min(Fixed& one, Fixed& two)
{
	return (one < two ? one : two);
}

const Fixed&	Fixed::min(const Fixed& one, const Fixed& two)
{
	return (one < two ? one : two);
}

Fixed&	Fixed::max(Fixed& one, Fixed& two)
{
	return (one > two ? one : two);
}

const Fixed&	Fixed::max(const Fixed& one, const Fixed& two)
{
	return (one > two ? one : two);
}
