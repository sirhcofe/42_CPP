/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 23:08:19 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/17 16:51:21 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		int	_mp;
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& old);
		~ScavTrap();
		ScavTrap&	operator = (const ScavTrap& old);

		void		attack(const std::string& target);
		void		guardGate();
};

#endif
