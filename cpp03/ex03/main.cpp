/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:58:45 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/17 16:59:39 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap trap("Jason");

	trap.attack("Enemy");
	trap.takeDamage(20);
	trap.beRepaired(10);
	trap.whoAmI();
	return (0);
}
