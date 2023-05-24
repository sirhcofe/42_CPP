/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:42:24 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/24 12:37:24 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("dog")
{
	std::cout << "Dog default constructor called!" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
	std::cout << "Dog copy constructor called!" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
	delete this->_brain;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << C_GRN "Worrffffff" C_RST << std::endl;
}
