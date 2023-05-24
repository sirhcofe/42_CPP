/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:39:53 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/24 17:28:58 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice default constructor called!" << std::endl;
}

Ice::Ice(std::string const& type) : AMateria(type)
{
	// std::cout << "Ice parameter constructor called!" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other._type)
{
	// std::cout << "Ice copy constructor called!" << std::endl;
}

Ice::~Ice()
{
	// std::cout << "Ice destructor called!" << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
	// std::cout << "Ice copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		Ice*	temp = new Ice(other._type);
		return (*temp);
	}	
	return (*this);
}

AMateria*	Ice::clone() const
{
	AMateria* temp = new Ice(*this);
	return (temp);
}

void	Ice::use(ICharacter& target)
{
	std::cout << C_BLU "* shoots an ice bolt at " C_PUR << target.getName() << C_BLU " *" C_RST << std::endl;
}
