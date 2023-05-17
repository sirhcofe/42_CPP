/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:12:06 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/17 15:45:32 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	/* Default constructor */
	{
		FragTrap	one("Ding");

		one.attack("EuLee");
		one.takeDamage(10);
		one.beRepaired(5);
		one.highFivesGuys();
	}
	std::cout << std::endl;
	/* Copy constructor */
	{
		FragTrap	two("EuLee");
		FragTrap	three(two);

		three.attack("YZ");
		three.highFivesGuys();
	}
	/* Copy assignment operator */
	std::cout << std::endl;
	{
		FragTrap	four("YZ");
		FragTrap	five("Joel");

		five = four;
		five.attack("Ding");
		five.takeDamage(5);
		five.beRepaired(1);
		five.highFivesGuys();
	}
	return (0);
}
