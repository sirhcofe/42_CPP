/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:54:03 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/23 22:52:12 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
	std::cout << "Cat default constructor called!" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called!" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!" << std::endl;
	delete this->_brain;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << C_GRN "Meeoowwwww" C_RST << std::endl;
}
