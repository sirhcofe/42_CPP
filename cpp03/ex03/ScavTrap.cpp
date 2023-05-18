/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 23:08:18 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/18 18:44:18 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20), _mp(50)
{
	std::cout << "ScavTrap constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& old) : ClapTrap(old)
{
	std::cout << "ScavTrap copy constructor called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called!" << std::endl;
}

ScavTrap&	ScavTrap::operator = (const ScavTrap& old)
{
	if (this != &old)
	{
		ClapTrap::operator = (old);
	}
	return (*this);
}

void	ScavTrap::guardGate()
{
	if (this->_hp == 0)
		std::cout << "ScavTrap " C_PUR << this->_name << C_RST " guard failed as he ran out of HP!" << std::endl;
	else if (this->_mp == 0)
		std::cout << "ScavTrap " C_PUR << this->_name << C_RST " guard failed as he ran out of MP!" << std::endl;
	else
	{
		std::cout << "ScavTrap " C_BLU << this->_name << C_RST " is in Guard Gate mode!" << std::endl;
		this->_mp -= 1;
	}
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hp == 0)
		std::cout << "ScavTrap " C_PUR << this->_name << C_RST " attack failed as he ran out of HP!" << std::endl;
	else if (this->_mp == 0)
		std::cout << "ScavTrap " C_PUR << this->_name << C_RST " attack failed as he ran out of MP!" << std::endl;
	else
	{
		std::cout << "ScavTrap " C_PUR << this->_name << C_RST " attacks " C_BLU << target << C_RST ", causing " C_RED << this->_ad << C_RST " points of damage!" << std::endl;
		this->_mp -= 1;
	}
}
