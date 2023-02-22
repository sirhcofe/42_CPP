/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:08:45 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/21 13:16:06 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>
# include <sstream>

# define C_PUR	"\033[35m"
# define C_BLU	"\x1B[34m"
# define C_CYN	"\x1B[36m"
# define C_RED  "\x1B[31m"
# define C_GRN  "\x1B[32m"
# define C_RST	"\x1B[m"

class PhoneBook
{
private:
	Contact	_contacts[8];
	int		_index;

	std::string	_getInput(int maxiter);
	int			_strToint(std::string input);
public:
	PhoneBook();
	~PhoneBook();
	
	void	addContact(void);
	void	search(void);
	void	startup(void);
};

#endif
