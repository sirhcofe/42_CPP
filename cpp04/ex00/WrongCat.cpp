/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:37:31 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/24 18:39:10 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("wrongcat")
{
	std::cout << "WrongCat default constructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& old) : WrongAnimal(old)
{
	std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& old)
{
	std::cout << "WrongCat copy assignment operator called!" << std::endl;
	if (this != &old)
		this->_type = old._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << C_GRN "Some wrong cat noises" C_RST << std::endl;
}
