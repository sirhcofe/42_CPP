/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:42:24 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/23 18:53:47 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("dog")
{
	std::cout << "Dog default constructor called!" << std::endl;
}

Dog::Dog(const Dog& old) : Animal(old)
{
	std::cout << "Dog copy constructor called!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
}

Dog&	Dog::operator=(const Dog& old)
{
	std::cout << "Dog copy assignment operator called!" << std::endl;
	if (this != &old)
		this->_type = old._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << C_GRN "Wooooorrrfffff" C_RST << std::endl;
}
