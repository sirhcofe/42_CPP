/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:57:35 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/24 18:31:34 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource default constructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_template[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	// std::cout << "MateriaSource copy constructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_template[i] = other._template[i];
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource destructor called!" << std::endl;
	// for (int i = 0; i < 4; i++)
	// 	if (this->_template[i] != NULL)
	// 		delete this->_template[i];
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	// std::cout << "MateriaSource copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
			this->_template[i] = other._template[i];
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL)
		std::cout << C_RED "Learn Materia failed! Materia to learn does not exist!" C_RST << std::endl;
	else
	{
		int	i;
		for (i = 0; i < 4; i++)
		{
			if (this->_template[i] == NULL)
			{
				this->_template[i] = m;
				break ;
			}
		}
		if (i == 4)
			std::cout << C_RED "Learn Materia failed! Materia template full!" C_RST << std::endl;
		else
			std::cout << C_CYN "Learn Materia successful!" C_RST << std::endl;
	}
}

std::string	toLowCase(std::string const& type)
{
	std::string	ret = type;

	for (std::string::size_type i = 0; i < type.length(); i++)
		ret[i] = static_cast<char>(tolower(type[i]));
	return (ret);
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	int	i;
	for (i = 0; i < 4; i++)
	{
		if (this->_template[i] != NULL && this->_template[i]->getType() == toLowCase(type))
		{
			std::cout << C_CYN "Create Materia successful!" C_RST << std::endl;
			return (this->_template[i]);
		}
	}
	if (i == 4)
		std::cout << C_RED "Create Materia failed!" C_RST << std::endl;
	return (NULL);
}
