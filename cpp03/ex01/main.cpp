/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 15:47:14 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/17 15:46:05 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/**
 * When an object of a derived class is created, the base class is constructed
 * first. This is to allow the derived class to access and utilize the members
 * and functionality provided by the base class during its own construction.
 * 
 * During destruction, the order is reversed. This ensures that the derived
 * class can clean up any resources it has acquired before the base class(es)
 * are destroyed.
*/
int	main(void)
{
	/* Default constructor */
	{
		ScavTrap	one("Ding");

		one.attack("EuLee");
		one.takeDamage(10);
		one.beRepaired(5);
		one.guardGate();
	}
	std::cout << std::endl;
	/* Copy constructor */
	{
		ScavTrap	two("EuLee");
		ScavTrap	three(two);

		three.attack("YZ");
		three.guardGate();
	}
	/* Copy assignment operator */
	std::cout << std::endl;
	{
		ScavTrap	four("YZ");
		ScavTrap	five("Joel");

		five = four;
		five.attack("Ding");
		five.guardGate();
	}
	return (0);
}
