/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:50:37 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/22 17:57:18 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& old);
		~DiamondTrap();
		DiamondTrap&	operator = (const DiamondTrap& old);

		void	whoAmI();
		void	print()
		{
			std::cout << this->_name << std::endl;
			std::cout << this->_hp << std::endl;
			std::cout << this->_mp << std::endl;
			std::cout << this->_ad << std::endl;
		}
};

#endif
