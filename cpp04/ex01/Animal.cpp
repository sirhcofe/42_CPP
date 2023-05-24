/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:44:16 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/23 22:50:22 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Some random animal")
{
	std::cout << "Animal default constructor called!" << std::endl;
}

Animal::Animal(const std::string& name) : _type(name)
{
	std::cout << "Animal parameter constructor called!" << std::endl;
}

Animal::Animal(const Animal& old) : _type(old._type)
{
	std::cout << "Animal copy constructor called!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!" << std::endl;
}

Animal&	Animal::operator=(const Animal& old)
{
	std::cout << "Animal copy assignment operator called!" << std::endl;
	if (this != &old)
		this->_type = old._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << C_GRN "Some random animal sound" C_RST << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}
