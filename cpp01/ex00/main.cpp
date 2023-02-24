/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:00:50 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/24 14:30:16 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	// init zombie1 on heap
	Zombie	*zombie1 = newZombie("Foo");
    zombie1->announce();
    delete zombie1;

	std::cout << std::endl;

	// init zombie on stack
	randomChump("Bar");

    return (0);
}