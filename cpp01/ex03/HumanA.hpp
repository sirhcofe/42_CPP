/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:36:58 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/15 15:12:19 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

#define C_BLU	"\x1B[34m"
#define C_CYN	"\x1B[36m"
#define C_RED	"\x1B[31m"
#define C_RST	"\x1B[m"

class HumanA
{
private:
	Weapon&		_weapn;
	std::string	_name;
public:
	HumanA(std::string name, Weapon& type);
	~HumanA();

	void	attack(void);
};

#endif
