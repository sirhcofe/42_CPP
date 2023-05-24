/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:38:02 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/24 12:42:24 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# define C_PUR	"\033[35m"
# define C_BLU	"\x1B[34m"
# define C_CYN	"\x1B[36m"
# define C_GRN  "\x1B[32m"
# define C_RST	"\x1B[m"

#include <iostream>

class AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal();
		AAnimal(const std::string& name);
		AAnimal(const AAnimal& old);
		virtual ~AAnimal();
		AAnimal&	operator=(const AAnimal& old);
		
		virtual void			makeSound() const = 0;
		virtual std::string		getType() const;
};

#endif
