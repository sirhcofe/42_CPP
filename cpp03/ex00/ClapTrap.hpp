/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:02:17 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/14 16:15:54 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

# define C_PUR	"\033[35m"
# define C_BLU	"\x1B[34m"
# define C_CYN	"\x1B[36m"
# define C_RED  "\x1B[31m"
# define C_GRN  "\x1B[32m"
# define C_RST	"\x1B[m"

class ClapTrap
{
	private:
		std::string	_name;
		int			_hp;
		int			_mp;
		int			_ad;

	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& old);
		~ClapTrap();
		ClapTrap&	operator = (const ClapTrap& old);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
