/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:22:25 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/23 22:52:57 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main()
{
	const Animal*	i = new Cat();
	const Animal*	j = new Dog();

	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	std::cout << std::endl;
	delete i;
	delete j;

	return (0);
}
