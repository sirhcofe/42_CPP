/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:08:37 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/20 14:00:02 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cstring>
#include <iomanip>

# define C_PUR	"\033[35m"
# define C_BLU	"\x1B[34m"
# define C_CYN	"\x1B[36m"
# define C_RED  "\x1B[31m"
# define C_GRN  "\x1B[32m"
# define C_RST	"\x1B[m"

class Contact
{
private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phonenum;
	std::string	_darksecret;

	std::string	_getInput(std::string str, int field);
	std::string	_substring(std::string str);
public:
	Contact();
	~Contact();
	
	void	newContact(void);
	void	printAll(int index);
	void	printSpecific();
};

#endif
