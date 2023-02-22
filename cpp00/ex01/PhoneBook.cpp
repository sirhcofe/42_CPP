/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:08:31 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/21 13:16:34 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_index= 0;
}

PhoneBook::~PhoneBook()
{
}

int	PhoneBook::_strToint(std::string input)
{
	std::stringstream	num(input);
	int					ret;

	num >> ret;
	return (ret);
}

std::string	PhoneBook::_getInput(int maxiter)
{
	std::string	input;
	int			i;
	int			num;

	std::cout << "Key in index to view full detail:" << std::flush;
	std::getline(std::cin, input);
	i = 0;
	while (1)
	{
		if (input.empty())
			std::cout << C_RED "Empty input detected! Try again: " C_RST << std::flush;
		else if (!(std::isdigit(input[i])))
			std::cout << C_RED "Non-integer input detected! Try again: " C_RST << std::flush;
		else
		{
			i++;
			if (i == (int)input.length())
			{
				num = this->_strToint(input);
				if ((num >= 0 && num <= 7) && num < maxiter)
					break ;
				else
					std::cout << C_RED "Index not found! Try again: " C_RST << std::flush;
			}
			else
				continue ;
		}
		i = 0;
		std::getline(std::cin, input);
	}
	return (input);
}

void	PhoneBook::search(void)
{
	int			i;
	int			maxiter;
	std::string	input;

	i = -1;
	std::cout << "     index| firstname|  lastname|  nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	maxiter = (this->_index > 8) * 8 + (this->_index <= 8) * this->_index;
	while (++i < (maxiter))
		this->_contacts[i].printAll(i);
	std::cout << "-------------------------------------------" << std::endl;
	input = this->_getInput(maxiter);
	this->_contacts[this->_strToint(input)].printSpecific();
}

void	PhoneBook::addContact(void)
{
	this->_contacts[this->_index % 8].newContact();
	this->_index++;
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
