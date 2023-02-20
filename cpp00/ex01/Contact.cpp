/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:08:39 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/20 12:21:40 by chenlee          ###   ########.fr       */
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
	i = 0;
	while (1)
	{
		if (input.empty())
			std::cout << C_RED "Empty input detected! Try again!\n" C_RST << str << std::flush;
		else if (field == 1 && std::isdigit(input[i]))
			std::cout << C_RED "Input must contain only alphabets! Try again!\n" C_RST << str << std::flush;
		else if (field == 2 && std::isalpha(input[i]))
			std::cout << C_RED "Input must contain only numbers! Try again\n" C_RST << str << std::flush;
		else
		{
			i++;
			if (i == (int)input.length())
				break ;
			continue ;
		}
		i = 0;
		std::getline(std::cin, input);
	}
	return (input);
}

void	Contact::newContact(void)
{
	this->_firstname = this->_getInput("1. Key in first name: ", 1);
	this->_lastname = this->_getInput("2. Key in last name: ", 1);
	this->_nickname = this->_getInput("3. Key in nickname: ", 3);
	this->_phonenum = this->_getInput("4. Key in phone number: ", 2);
	this->_darksecret = this->_getInput("5. Leak a dark secret: ", 3);
}

std::string	Contact::_substring(std::string str)
{
	if (str.length() > 10)
		str[9] = '.';
	return (str.substr(0, 10));
}

void	Contact::printSpecific(void)
{
	std::cout << "1. First name:\t" << this->_firstname << std::endl;
	std::cout << "2. Last name:\t" << this->_lastname << std::endl;
	std::cout << "3. Nickname:\t" << this->_nickname << std::endl;
	std::cout << "4. Phone num:\t" << this->_phonenum << std::endl;
	std::cout << "5. Dark secret:\t" << this->_darksecret << std::endl;
}

void	Contact::printAll(int index)
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << this->_substring(this->_firstname) << "|";
	std::cout << std::setw(10) << this->_substring(this->_lastname) << "|";
	std::cout << std::setw(10) << this->_substring(this->_nickname) << "|";
	std::cout << std::endl;
}
