/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:47:31 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/24 17:41:00 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("unknown name")
{
	// std::cout << "Character default constructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string const& name) : _name(name)
{
	// std::cout << "Character parameter constructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character& other) : _name(other._name)
{
	// std::cout << "Character copy constructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = other._inventory[i];
}

Character::~Character()
{
	// std::cout << "Character destructor called!" << std::endl;
	// for (int i = 0; i < 4; i++)
	// 	if (this->_inventory[i] != NULL)
	// 		delete this->_inventory[i];
}

Character&	Character::operator=(const Character& other)
{
	// std::cout << "Character copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		Character*	temp = new Character(other._name);
		for (int i = 0; i < 4; i++)
			if (other._inventory[i] != NULL)
				temp->_inventory[i] = other._inventory[i];
		return (*temp);
	}
	return (*this);
}

std::string const& Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (m == NULL)
		std::cout << C_RED "Equip failed! Materia does not exist!" C_RST << std::endl;
	else
	{
		int	i;
		for (i = 0; i < 4; i++)
			if (this->_inventory[i] == NULL)
				this->_inventory[i] = m;
		if (i == 4)
			std::cout << C_RED "Equip failed! Materia inventory full!" C_RST << std::endl;
		else
			std::cout << C_CYN "Equip successful!" C_RST << std::endl;
	}
}

void	Character::unequip(int idx)
{
	if ((idx < 0 || idx > 3) || this->_inventory[idx] == NULL)
		std::cout << C_RED "Unequip failed! Materia at inventory slot[" << idx << "] does not exist!" C_RST << std::endl;
	else
	{
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
		std::cout << C_CYN "Unequip successful!" C_RST << std::endl;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if ((idx < 0 || idx > 3) || this->_inventory[idx] == NULL)
		std::cout << C_RED "Failed to use Materia! Materia at inventory slot[" << idx << "] does not exist!" C_RST << std::endl;
	else
		this->_inventory[idx]->use(target);
}
