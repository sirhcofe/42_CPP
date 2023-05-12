/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:02:05 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/08 20:35:07 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;

	public:
		Fixed();
		Fixed(int num);
		Fixed(float num);
		Fixed(const Fixed& old);
		~Fixed();

		Fixed&	operator = (const Fixed& old);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		// Comparative Operator Overload
		bool	operator>(const Fixed& fixed) const;
		bool	operator<(const Fixed& fixed) const;
		bool	operator>=(const Fixed& fixed) const;
		bool	operator<=(const Fixed& fixed) const;
		bool	operator==(const Fixed& fixed) const;
		bool	operator!=(const Fixed& fixed) const;

		// Arithmetic Operator Overload
		Fixed	operator+(const Fixed& fixed) const;
		Fixed	operator-(const Fixed& fixed) const;
		Fixed	operator*(const Fixed& fixed) const;
		Fixed	operator/(const Fixed& fixed) const;

		// Increment/Decrement Operator Overload
		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		// Min/Max function
		static Fixed&		min(Fixed& one, Fixed& two);
		static const Fixed&	min(const Fixed& one, const Fixed& two);
		static Fixed&		max(Fixed& one, Fixed& two);
		static const Fixed&	max(const Fixed& one, const Fixed& two);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
