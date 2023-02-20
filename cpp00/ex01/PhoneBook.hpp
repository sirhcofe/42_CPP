/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:08:45 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/20 12:37:59 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

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
public:
	PhoneBook();
	~PhoneBook();
	
	void	addContact(void);
	void	search(void);
	void	startup(void);
};

#endif
