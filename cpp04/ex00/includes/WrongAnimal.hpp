/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:58:22 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/24 18:42:14 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# define C_PUR	"\033[35m"
# define C_BLU	"\x1B[34m"
# define C_CYN	"\x1B[36m"
# define C_GRN  "\x1B[32m"
# define C_RST	"\x1B[m"

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(std::string name);
		WrongAnimal(const WrongAnimal& old);
		virtual ~WrongAnimal();
		WrongAnimal&	operator=(const WrongAnimal& old);

		virtual void	makeSound() const;
		std::string		getType() const;
};

#endif
