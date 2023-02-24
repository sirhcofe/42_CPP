/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:55:36 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/24 18:31:40 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapn = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	if (this->_weapn == NULL)
		std::cout << "huh" << std::endl;
	else
		std::cout << C_BLU << this->_name << C_CYN " attacks with their " << C_RED << this->_weapn->getType() << C_RST << std::endl;
}

void	HumanB::setWeapon(Weapon& type)
{
	this->_weapn = &type;
}
