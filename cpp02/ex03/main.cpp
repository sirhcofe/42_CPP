/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:39:10 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/13 00:03:22 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main()
{
	Point const a(-8.0, 3.0);
	Point const b(4.0, 5.0);
	Point const c(8.0, -3.0);
	Point const point(-8.0, 3.0);

	std::cout << bsp(a, b, c, point) << std::endl;
}
