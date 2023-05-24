/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:06:55 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/22 17:56:33 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("", 100, 100, 30)
{
	std::cout << "FragTrap default constructor called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& old) : ClapTrap(old)
{
	std::cout << "FragTrap copy constructor called!" << std::endl;
}

FragTrap&	FragTrap::operator = (const FragTrap& old)
{
	std::cout << "FragTrap copy assignment operator called!" << std::endl;
	if (this != &old)
		ClapTrap::operator = (old);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called!" << std::endl;
}

// void	FragTrap::attack(const std::string& target)
// {
// 	if (this->_hp == 0)
// 		std::cout << "FragTrap " C_PUR << this->_name << C_RST " attack failed as he ran out of HP!" << std::endl;
// 	else if (this->_mp == 0)
// 		std::cout << "FragTrap " C_PUR << this->_name << C_RST " attack failed as he ran out of MP!" << std::endl;
// 	else
// 	{
// 		std::cout << "FragTrap " C_PUR << this->_name << C_RST " attacks " C_BLU << target << C_RST ", causing " C_RED << this->_ad << C_RST " points of damage!" << std::endl;
// 		this->_mp -= 1;
// 	}
// }

void	FragTrap::highFivesGuys()
{
	if (this->_hp == 0)
		std::cout << "FragTrap " C_BLU << this->_name << C_RST " can't high five because he is dead!" << std::endl;
	else if (this->_mp == 0)
		std::cout << "FragTrap " C_BLU << this->_name << C_RST " can't high five because he ran out of MP!" << std::endl;
	else
	{
		std::cout << "FragTrap " C_BLU << this->_name << C_RST " tried to high five but was left hanging!" << std::endl;
		this->_mp -= 1;
	}
}
