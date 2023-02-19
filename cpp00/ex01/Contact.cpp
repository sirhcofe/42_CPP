/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:08:39 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/19 22:07:19 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::_getInput(std::string str, int field)
{
	std::string	input;
	int			i;

	(void)field;
	std::cout << str << std::flush;
	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout << "Empty input detected! Try again!\n" << str << std::flush;
		std::getline(std::cin, input);
	}
	i = -1;
	while (++i < (int)input.length())
	{
		if (field == 1 && std::isdigit(input[i]))
			std::cout << "Input must contain only alphabets! Try again!\n" << str << std::flush;
		else if (field == 2 && std::isalpha(input[i]))
			std::cout << "Input must contain only numbers! Try again\n" << str << std::flush;
		else
			continue ;
		i = -1;
		std::getline(std::cin, input);
	}
	return (input);
}

void	Contact::init(void)
{
	this->_firstname = this->_getInput("1. Key in first name: ", 1);
	this->_lastname = this->_getInput("2. Key in last name: ", 1);
	this->_nickname = this->_getInput("3. Key in nickname: ", 3);
	this->_phonenum = this->_getInput("4. Key in phone number: ", 2);
	this->_darksecret = this->_getInput("5. Leak a dark secret: ", 3);
}

void	Contact::print(int index)
{
	std::cout << std::setw(10) << index;
	std::cout << "|";
	if (this->_firstname.length() > 10)
		std::cout << this->_firstname.substr(0, 9) << ".";
	else if (this->_firstname.length() <= 10)
		std::cout << std::setw(10) << this->_firstname.substr(0, 10);
	std::cout << "|";
	if (this->_lastname.length() > 10)
		std::cout << this->_lastname.substr(0, 9) << ".";
	else if (this->_lastname.length() <= 10)
		std::cout << std::setw(10) << this->_lastname.substr(0, 10);
	std::cout << "|";
	if (this->_nickname.length() > 10)
		std::cout << this->_nickname.substr(0, 9) << ".";
	else if (this->_nickname.length() <= 10)
		std::cout << std::setw(10) << this->_nickname.substr(0, 10);
	std::cout << std::endl;
}