/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:43:22 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/22 17:49:58 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hp(0), _mp(0), _ad(0)
{
	std::cout << "ClapTrap default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _mp(10), _ad(10)
{
	std::cout << "ClapTrap constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int mp, int ad) : _name(name), _hp(hp), _mp(mp), _ad(ad)
{
	std::cout << "ClapTrap constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& old) : _name(old._name), _hp(old._hp), _mp(old._mp), _ad(old._ad)
{
	std::cout << "ClapTrap copy constructor called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called!" << std::endl;
}

ClapTrap&	ClapTrap::operator = (const ClapTrap& old)
{
	std::cout << "ClapTrap copy assignment operator called!" << std::endl;
	if (this != &old)
	{
		this->_name = old._name;
		this->_hp = old._hp;
		this->_mp = old._mp;
		this->_ad = old._ad;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hp == 0)
		std::cout << "ClapTrap " C_PUR << this->_name << C_RST " attack failed as he ran out of HP!" << std::endl;
	else if (this->_mp == 0)
		std::cout << "ClapTrap " C_PUR << this->_name << C_RST " attack failed as he ran out of MP!" << std::endl;
	else
	{
		std::cout << "ClapTrap " C_PUR << this->_name << C_RST " attacks " C_BLU << target << C_RST ", causing " C_RED << this->_ad << C_RST " points of damage!" << std::endl;
		this->_mp -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
		std::cout << "ClapTrap " C_BLU << this->_name << C_RST " is already dead!" << std::endl;
	else
	{
		std::cout << "ClapTrap " C_BLU << this->_name << C_RST " took " C_RED << amount << C_RST " amount of damage!" << std::endl;
		this->_hp -= amount;
		if (this->_hp < 0)
			this->_hp = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_mp == 0)
		std::cout << "ClapTrap " C_BLU << this->_name << C_RST " tried to repair himself but he has already ran out of MP!" << std::endl;
	else
	{
		std::cout << "ClapTrap " C_BLU << this->_name << C_RST " repairs himself restoring " C_GRN << amount << C_RST " amount of HP!" << std::endl;
		this->_hp += amount;
		if (this->_hp > 10)
			this->_hp = 10;
		this->_mp -= 1;
	}
}

std::string	ClapTrap::getName()
{
	return (this->_name);
}
