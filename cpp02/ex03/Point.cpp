/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:09:56 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/13 22:25:18 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/**
 * Since the private attribute _x and _y are const attributes of the class
 * Point, and once they are initialized, their values cannot be changed.
 * Therefore, we must initialize them in the constructor's initialization list.
*/
Point::Point() : _x(0), _y(0)
{
}

Point::Point(float x, float y) : _x(x), _y(y)
{
}

Point::Point(const Point& old) : _x(old._x), _y(old._y)
{
}

Point&	Point::operator = (const Point& old)
{
	if (this != &old)
	{
		const_cast<Fixed&>(_x) = old._x;
		const_cast<Fixed&>(_y) = old._y;
	}
	return (*this);
}

Point::~Point()
{
}

float	Point::getX(void) const
{
	return (this->_x.toFloat());
}

float	Point::getY(void) const
{
	return (this->_y.toFloat());
}

float	ftAbs(float num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}

/**
 * To determine if the point lies inside the triangle:
 * 1. Calculate the area of the original triangle
 * 2. Calculate the area of the three individual smaller triangles, each formed
 *    by one of the vertices of the original triangle and the new point
 *    - If the area return 0, it means the point lies either on the edge or the
 *      sides of the original triangle
 * 3. Calculate the total area of the 3 smaller triangles
 * 4. If the sum of the areas of the smaller triangle equates to the area of the
 *    original triangle, then the point lies inside the triangle
*/
bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	float	totalArea;
	float	tOne;
	float	tTwo;
	float	tThree;
	float	delta;

	totalArea = 0.5 * ftAbs((b.getX() - a.getX()) * (c.getY() - a.getY()) - (c.getX() - a.getX()) * (b.getY() - a.getY()));
	tOne = 0.5 * ftAbs((b.getX() - a.getX()) * (point.getY() - a.getY()) - (point.getX() - a.getX()) * (b.getY() - a.getY()));
	if (tOne > -0.001 && tOne < 0.001)
		return (false);
	tTwo = 0.5 * ftAbs((point.getX() - a.getX()) * (c.getY() - a.getY()) - (c.getX() - a.getX()) * (point.getY() - a.getY()));
	if (tTwo > -0.001 && tTwo < 0.001)
		return (false);
	tThree = 0.5 * ftAbs((b.getX() - point.getX()) * (c.getY() - point.getY()) - (c.getX() - point.getX()) * (b.getY() - point.getY()));
	if (tThree > -0.001 && tThree < 0.001)
		return (false);
	delta = totalArea - (tOne + tTwo + tThree);
	if (delta > -0.001 && delta < 0.001)
		return (true);
	else
		return (false);
}
