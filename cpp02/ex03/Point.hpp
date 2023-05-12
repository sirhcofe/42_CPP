/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:09:54 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/08 20:54:35 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		Point();
		Point(float x, float y);
		Point(const Point& old);
		~Point();

		Point&	operator = (const Point& old);

		float	getX() const;
		float	getY() const;
};

bool	bsp(const Point a, const Point b, const Point c, const Point point);

#endif
