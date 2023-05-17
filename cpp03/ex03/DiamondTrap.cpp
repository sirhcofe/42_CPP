/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:50:39 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/17 17:08:32 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
 
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap constructor called!" << std::endl;
	this->_name = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap& old) : ClapTrap(old), ScavTrap(old), FragTrap(old)
{
	std::cout << "DiamondTrap copy constructor called!" << std::endl;
	this->_name = old._name;
}

DiamondTrap&	DiamondTrap::operator = (const DiamondTrap& old)
{
	std::cout << "DiamondTrap copy assignment operator called!" << std::endl;
	if (this != &old)
	{
		ClapTrap::operator=(old);
		FragTrap::operator=(old);
		ScavTrap::operator=(old);
		this->_name = old._name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called!" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap " C_BLU << this->_name << C_RST " aka ClapTrap " C_PUR << ClapTrap::_name << C_RST << std::endl;
}
