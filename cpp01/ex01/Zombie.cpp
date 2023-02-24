/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:53:35 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/24 16:19:50 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	intToString(int num)
{
	std::string			ret;
	std::stringstream	ss;

	ss << num;
	ret = ss.str();
	return (ret);
}

void	Zombie::setName(int i, std::string name)
{
	this->_name = name + intToString(i);
}

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	horde;
	int		i;
	
	horde = new Zombie[N];
	i = -1;
	while (++i < N)
		horde[i].setName(i, name);
	return (horde);
}
