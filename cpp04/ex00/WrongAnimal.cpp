/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:34:38 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/23 22:21:37 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Some random WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : _type(name)
{
	std::cout << "WrongAnimal parameter constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& old) : _type(old._type)
{
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called!" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& old)
{
	std::cout << "WrongAnimal copy assignment operator called!" << std::endl;
	if (this != &old)
		this->_type = old._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << C_GRN "Some wrong random animal noises" C_RST << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}
