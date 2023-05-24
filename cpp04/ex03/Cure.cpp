/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:19:55 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/24 17:29:18 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure default constructor called!" << std::endl;
}

Cure::Cure(std::string const& type) : AMateria(type)
{
	// std::cout << "Cure parameter constructor called!" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other._type)
{
	// std::cout << "Cure copy constructor called!" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Cure destructor called!" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	// std::cout << "Cure copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		Cure*	temp = new Cure(other._type);
		return (*temp);
	}	
	return (*this);
}

AMateria*	Cure::clone() const
{
	AMateria* temp = new Cure(*this);
	return (temp);
}

void	Cure::use(ICharacter& target)
{
	std::cout << C_GRN "* heals " C_PUR << target.getName() << "'s " C_GRN "wounds *" C_RST << std::endl;
}
