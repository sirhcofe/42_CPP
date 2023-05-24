/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:05:13 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/24 17:02:33 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

# define C_PUR	"\033[35m"
# define C_BLU	"\x1B[34m"
# define C_CYN	"\x1B[36m"
# define C_RED  "\x1B[31m"
# define C_GRN  "\x1B[32m"
# define C_RST	"\x1B[m"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const& type);
		AMateria(const AMateria& other);
		virtual ~AMateria();
		AMateria&	operator=(const AMateria& other);

		std::string const&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
