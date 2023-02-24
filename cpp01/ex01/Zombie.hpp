/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:53:48 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/24 16:01:12 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie();
	~Zombie();

	void	setName(int i, std::string name);
	void	announce(void);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
