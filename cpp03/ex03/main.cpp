/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:58:45 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/22 17:56:56 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/**
 * In multiple inheritance, when a derived class inherits from multiple base
 * classes that have a common base class, the derived class can end up with
 * multiple copies of the common base class. This can lead to ambiguity and
 * conflicts when accessing members of the common base class.
 * 
 * Virtual inheritance is a feature in C++ that allows a derived class to inherit
 * a base class in such a way that only a single instance of the base class is
 * shared among all the derived classes in a class hierarchy. This means that if
 * a class hierarchy involves multiple inheritance paths to a common base class,
 * using virtual inheritance ensures that there is no duplication of the base class.
 * 
 * This resolves the ambiguity and prevents duplication of the base class.
 * 
 * Note that using virtual inheritance comes with some runtime and memory
 * overhead due to the need for additional bookkeeping to maintain the shared
 * base class instance. Therefore, it should be used judiciously when necessary
 * to resolve inheritance-related problems.
*/
int	main()
{
	DiamondTrap trap("Jason");

	trap.print();
	trap.attack("Enemy");
	trap.takeDamage(20);
	trap.beRepaired(10);
	trap.whoAmI();
	return (0);
}
