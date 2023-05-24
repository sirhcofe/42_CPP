/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:18:57 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/23 22:42:22 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

/**
 * Benefits of polymorphism:
 * 1. Code organization and extensibility:
 *    Polymorphism allows you to define common behavior in the base class and
 *    specific behaviors in the derived classes.
 * 
 * 2. Open-closed principle:
 *    Polymorphism adheres to the open-closed principle, where classes should be
 *    open for extension but closed for modification. With virtual functions,
 *    you can introduce new derived classes and override the behavior of the
 *    base class without modifying the base class itself.
 * 
 * 3. Dynamic binding:
 *    When using virtual functions, the appropriate function to call is
 *    determined at runtime based on the actual type of the object. This is
 *    known as dynamic binding or late binding. This allows treating objects of
 *    different derived classes as objects of the base class, and call the
 *    correct function implementation corresponding to the actual type of the
 *    object. This dynamic dispatch is not possible with if-else statements in
 *    the base class.
 * 
 * 4. Readability and simplicity:
 *    Polymorphism provides a cleaner and more readable code structure. By using
 *    virtual functions, the behavior of each derived class is defined within
 *    its own implementation, instead of multiple if-else statements.
 * 
 * It is important to note that a virtual destructor in the base class is
 * necessary when virtual public member functions are present, such that proper
 * destruction of the objects is ensured when deleting a derived class object
 * through base class.
*/
int	main()
{
	std::cout << C_BLU "TESTING ANIMAL CLASS" C_RST << std::endl;
	{
		const Animal*	meta = new Animal();
		const Animal*	i = new Cat();
		const Animal*	j = new Dog();
		const Cat*		k = new Cat();

		std::cout << "\n";
		std::cout << C_CYN "meta name: " C_RST << meta->getType() << std::endl;
		std::cout << C_CYN "i name:    " C_RST << i->getType() << std::endl;
		std::cout << C_CYN "j name:    " C_RST << j->getType() << std::endl;
		std::cout << C_CYN "k name:    " C_RST << k->getType() << std::endl;
		meta->makeSound();
		i->makeSound();
		j->makeSound();
		k->makeSound();
		delete meta;
		delete i;
		delete j;
		delete k;
	}
	std::cout << "\n" << C_PUR "TESTING WRONGANIMAL CLASS" C_RST << std::endl;
	{
		const WrongAnimal*	meta = new WrongAnimal();
		const WrongAnimal*	i = new WrongCat();

		std::cout << "\n";
		std::cout << C_CYN "meta name: " C_RST << meta->getType() << std::endl;
		std::cout << C_CYN "i name:    " C_RST << i->getType() << std::endl;
		meta->makeSound();
		i->makeSound();
		delete meta;
		delete i;
	}
	return (0);
}
