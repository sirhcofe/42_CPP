/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:05:00 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/24 17:29:43 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("")
{
	// std::cout << "AMateria default constructor called!" << std::endl;
}

AMateria::AMateria(std::string const& type) : _type(type)
{
	// std::cout << "AMateria parameter constructor called!" << std::endl;
}

AMateria::AMateria(const AMateria& other) : _type(other._type)
{
	// std::cout << "AMateria copy constructor called!" << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called!" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	// std::cout << "AMateria copy assignment operator called!" << std::endl;
	if (this != &other)
		const_cast<std::string&>(this->_type) = other._type;
	return (*this);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << C_RED "* unknown Materia used on " C_PUR << target.getName() << C_RED " *" C_RST << std::endl;
}

std::string const&	AMateria::getType() const
{
	return (this->_type);
}
