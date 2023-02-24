/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:55:52 by chenlee           #+#    #+#             */
/*   Updated: 2023/02/24 18:31:38 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

#define C_BLU	"\x1B[34m"
#define C_CYN	"\x1B[36m"
#define C_RED  "\x1B[31m"
#define C_RST	"\x1B[m"

class HumanB
{
private:
	Weapon*		_weapn;
	std::string	_name;
public:
	HumanB(std::string name);
	~HumanB();

	void	attack(void);
	void	setWeapon(Weapon& type);
};

#endif
