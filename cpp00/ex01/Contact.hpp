/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:08:37 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/19 17:32:44 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cstring>
#include <iomanip>

class Contact
{
private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phonenum;
	std::string	_darksecret;

	std::string	_getInput(std::string str, int field);
public:
	Contact();
	~Contact();
	void	init(void);
	void	print(int index);
};

#endif
