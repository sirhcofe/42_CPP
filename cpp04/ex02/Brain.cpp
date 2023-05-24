/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:55:20 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/23 17:17:08 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called!" << std::endl;
}

Brain::Brain(const Brain& old)
{
	std::cout << "Brain copy constructor called!" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = old._ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain destructor called!" << std::endl;
}

Brain&	Brain::operator=(const Brain& old)
{
	std::cout << "Brain copy assignment operator called!" << std::endl;
	if (this != &old)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = old._ideas[i];
	}
	return (*this);
}
