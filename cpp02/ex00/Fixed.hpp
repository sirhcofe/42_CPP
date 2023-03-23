/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:03:11 by chenlee           #+#    #+#             */
/*   Updated: 2023/03/01 19:35:59 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_value;
		static const int	bits = 8;

	public:
		Fixed();
		Fixed(const Fixed& old);
		~Fixed();

		Fixed&	operator = (const Fixed& old);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
