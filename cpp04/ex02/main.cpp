/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:22:25 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/24 12:56:48 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

/**
 * An abstract class is a class that is designed to be specifically used as a
 * base class. An abstract class contains at least one pure virtual function.
 * You declare a pure virtual function by using a pure specifier (= 0) in the
 * declaration of a virtual member function in the class declaration.
 * 
 * Characteristics:
 * 1. Pure virtual functions:
 *     These functions are declared in the base class without any implementation
 *     using the syntax `virtual returnType functionName(parameters) = 0;`, and
 *     requires the derived class to define and provide implementations for the
 *     virtual functions.
 * 
 * 2. Incomplete implementation:
 *     Since an abstract class contains incomplete pure virtual functions
 *     implementation. It provides a common interface through pure virtual
 *     functions but lacks the implementation details, leaving them to be
 *     defined by derived classes.
 * 
 * 3. Inability to instantiate:
 *     An abstract class cannot be instantiated directly. This means objects of
 *     the abstract class cannot be created itself. However, it is possible to
 *     create pointers or references of the abstract class type, which can be
 *     used to refer to objects of derived classes.
*/
int	main()
{
	std::cout << C_BLU "TESTING AANIMAL ABSTRACT CLASS" C_RST << std::endl;
	{
		const AAnimal*	i = new Cat();
		const AAnimal*	j = new Dog();

		std::cout << std::endl;
		i->makeSound();
		j->makeSound();
		std::cout << std::endl;
		delete i;
		delete j;
	}
	std::cout << "\n" << C_PUR "TESTING POINTERS/REFERENCE OF AANIMAL ABSTRACT CLASS" C_RST << std::endl;
	{
		Cat cat;
		Dog	dog;
		std::cout << std::endl;
		AAnimal*	i = &cat;
		AAnimal*	j = &dog;
		std::cout << std::endl;
		i->makeSound();
		j->makeSound();
		std::cout << std::endl;
	}
	return (0);
}
