/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:42:48 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/24 18:23:32 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _weapn(type)
{
	this->_name = name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << C_BLU << this->_name << C_CYN " attacks with their " << C_RED << this->_weapn.getType() << C_RST << std::endl;
}
