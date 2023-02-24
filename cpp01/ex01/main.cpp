/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:04:57 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/24 16:20:22 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		i;
	int		count;
	Zombie*	horde;
	
	count = 5;
	horde = zombieHorde(count, "Foo");
	i = -1;
	while (++i < count)
		horde[i].announce();
	delete[] horde;
	return (0);
}
