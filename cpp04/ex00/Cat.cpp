/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:54:03 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/23 18:53:11 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
	std::cout << "Cat default constructor called!" << std::endl;
}

Cat::Cat(const Cat& old) : Animal(old)
{
	std::cout << "Cat copy constructor called!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!" << std::endl;
}

Cat&	Cat::operator=(const Cat& old)
{
	std::cout << "Cat copy assignment operator called!" << std::endl;
	if (this != &old)
		this->_type = old._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << C_GRN "Meoooowwwwwwww" C_RST << std::endl;
}
