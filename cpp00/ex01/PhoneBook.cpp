/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:08:31 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/19 22:09:36 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::search(void)
{
	int	i;

	i = -1;
	std::cout << "     index| firstname|  lastname|  nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	while (++i < this->_index)
		this->_contacts[i].print(i);
	std::cout << std::endl;
}

void	PhoneBook::addContact(void)
{
	this->_contacts[this->_index].init();
	this->_index++;
	if (this->_index == 8)
		this->_index = 0;
}

void	PhoneBook::startup(void)
{
	std::cout << C_PUR "\n------------Welcome to phonebook-------------\n"
			<< C_CYN "Usage:\n"
			<< C_BLU "<ADD>\t to add new contact entry\n"
			<< "<SEARCH> to search for existing contact entry\n"
			<< "<EXIT>\t to exit the program\n" C_RST
			<< std::endl;
}
