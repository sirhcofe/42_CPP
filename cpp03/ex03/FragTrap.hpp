/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:12:21 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/17 16:59:53 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		int	_hp;
		int	_ad;
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& old);
		~FragTrap();
		FragTrap&	operator = (const FragTrap& old);

		// void	attack(const std::string& target);
		void	highFivesGuys();
};

#endif