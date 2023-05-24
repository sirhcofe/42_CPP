/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:44:16 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/24 12:44:59 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Some random AAnimal")
{
	std::cout << "AAnimal default constructor called!" << std::endl;
}

AAnimal::AAnimal(const std::string& name) : _type(name)
{
	std::cout << "AAnimal parameter constructor called!" << std::endl;
}

AAnimal::AAnimal(const AAnimal& old) : _type(old._type)
{
	std::cout << "AAnimal copy constructor called!" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called!" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& old)
{
	std::cout << "AAnimal copy assignment operator called!" << std::endl;
	if (this != &old)
		this->_type = old._type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}
